#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int grid[3][3] = {
    {0,0,0},
    {0,0,0},
    {0,0,0}
};
int numbers[9] = {1,2,3,4,5,6,7,8,9};

int isMagic(int arr[3][3]) {
    int magic = 1;
    for(int i = 0; i < 3; i++) {
        int isum = 0;
        for (int j = 0; j < 3; j++) {
            isum += arr[i][j];
        }
        if(isum != 15) magic = 0;
    }
    for(int j = 0; j < 3; j++) {
        int jsum = 0;
        for (int i = 0; i < 3; i++) {
            jsum += arr[i][j];
        }
        if(jsum != 15) magic = 0;
    }
    if(arr[0][0] + arr[1][1] + arr[2][2] != 15) magic = 0;
    if(arr[2][0] + arr[1][1] + arr[0][2] != 15) magic = 0;
    return magic;
}

void printArr(int arr[3][3])
{
    int i, j;
    printf("\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if(j == 0) printf("[ ");
            printf("%d ", arr[i][j]);
        }
        printf("]\n");
    }
    printf("\n");
}

void shuffle() {

    for(int i = 8; i > 0; i--) {
      int r = (rand() % (i + 1));
      int temp = numbers[i];
      numbers[i] = numbers[r];
      numbers[r] = temp;
    }
}

void generateGrid() {

    shuffle();
    int n = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) {
            grid[i][j] = numbers[n];
            n++;
        }
    }

}


int main(void) {
    srand(time(0));

    int loshu[][3] = {
        {4, 3, 8},
        {9, 5, 1},
        {2, 7, 6}
    };

    int found = 0;
    int count = 0;
    while(!found) {
        generateGrid();
        count++;
        if(count > INT_MAX - 1000)  {
            for (int i = 0; i < 3; i++)
                for (int j = 0; j < 3; j++)
                    grid[i][j] = loshu[i][j];
        }
        if(isMagic(grid) == 1) found = 1;
    }
    printf("So lan thu %d.", count);
    printArr(grid);
}
