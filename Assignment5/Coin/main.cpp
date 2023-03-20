#include "Coin.cpp"
int main(){
    int headcount = 0;
    int tailcount = 0;
    Coin c;
    for(int i =0 ; i < 20; i++){  
        string toss = c.getSideup();
        c.Toss();
        if(c.getSideup() == "heads")
        {
            headcount ++;
            cout << c.getSideup() << endl;
        }
        else{
            tailcount ++;
            cout << c.getSideup() << endl;
        }
    }
    cout << headcount << endl;
    cout << tailcount << endl;
    return 0;
}