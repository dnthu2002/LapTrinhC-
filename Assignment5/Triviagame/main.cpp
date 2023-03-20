#include "TriviaGame.cpp"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void questionAns(question[], int);
int main() {
	question trivia[10]; 
	int count = 0; 
	int onechoice; 
	int twochoice;
	int onePoints = 0;
	int twoPoints = 0;
	int x;
	cout << "Let's test your math knowledge." << endl;
	cout << "May the best person win" << endl;

    // QUESTION ONE   
	trivia[0].setQues("What is the sum of two plus two?");
		trivia[0].setAnswer1("1.  six");
		trivia[0].setAnswer2("2.  three");
		trivia[0].setAnswer3("3.  eight");
		trivia[0].setAnswer4("4.  four");
		trivia[0].setCorrect(4);
	trivia[1].setQues("What is the product of thirty divided by five?");
		trivia[1].setAnswer1("1.  two");
		trivia[1].setAnswer2("2.  six");
		trivia[1].setAnswer3("3.  ten");
		trivia[1].setAnswer4("4.  seven");
		trivia[1].setCorrect(2);
	trivia[2].setQues("What is the product of eighteen divided by nine minus one?");
		trivia[2].setAnswer1("1.  one");
		trivia[2].setAnswer2("2.  seven");
		trivia[2].setAnswer3("3.  six");
		trivia[2].setAnswer4("4.  three");
		trivia[2].setCorrect(1);
	trivia[3].setQues("If you drive eighty miles and consume four gallons of gas, how many miles per gallon did you achieve?");
		trivia[3].setAnswer1("1.  thirteen");
		trivia[3].setAnswer2("2.  forty");
		trivia[3].setAnswer3("3.  twenty");
		trivia[3].setAnswer4("4.  eighty");
		trivia[3].setCorrect(3);
	trivia[4].setQues("If you drive a constant sixty miles per hour how many miles will you cover in three hours?");
		trivia[4].setAnswer1("1.  eighteen");
		trivia[4].setAnswer2("2.  one hundred and twenty");
		trivia[4].setAnswer3("3.  one hundred and eighty");
		trivia[4].setAnswer4("4.  none of the above");
		trivia[4].setCorrect(3);
	trivia[5].setQues("You have to be to work at seven thirty every morning, It normally takes you twenty minutes to drive to work. What time should you leave?");
		trivia[5].setAnswer1("1.  Seven ten");
		trivia[5].setAnswer2("2.  six o'clock");
		trivia[5].setAnswer3("3.  six thirty");
		trivia[5].setAnswer4("4.  none of the above");
		trivia[5].setCorrect(1);
	trivia[6].setQues("There is a road construction causing a ten minute detour. What time should you leave?");
		trivia[6].setAnswer1("1.  six thirty");
		trivia[6].setAnswer2("2.  seven o'clock");
		trivia[6].setAnswer3("3.  eight o'clock");
		trivia[6].setAnswer4("4.  seven o'clock");
		trivia[6].setCorrect(2);
	trivia[7].setQues("If your vehicle has a 20 gallon gas tank and gas costs 3.79 per gallon. how much would it cost to fill 5 gallons");
		trivia[7].setAnswer1("1.  seventy five dollars and eighty cents");
		trivia[7].setAnswer2("2.  it's free");
		trivia[7].setAnswer3("3.  eighteen dollars and ninty-five cents");
		trivia[7].setAnswer4("4.  three dollars and seventy-nine cents");
		trivia[7].setCorrect(3);
	trivia[8].setQues("What is pi");
		trivia[8].setAnswer1("1.  3.14159");
		trivia[8].setAnswer2("2.  food");
		trivia[8].setAnswer3("3.  3.15149");
		trivia[8].setAnswer4("4.  2");
		trivia[8].setCorrect(1);
	trivia[9].setQues("What is the reduced mixed number for one point eight zero");
		trivia[9].setAnswer1("1.  three fourths");
		trivia[9].setAnswer2("2.  two and one thirds");
		trivia[9].setAnswer3("3.  one and three fourths");
		trivia[9].setAnswer4("4.  four thirds");
		trivia[9].setCorrect(3);
	while(count < 9, count++) {
		
		cout << setw(10) << " QUESTION " << (count + 1) << endl;
		
		questionAns(trivia,count); 
		cout << "Player 1's answer: ";
		cin >> onechoice;
		cout << "Player 2's answer: ";
		cin >> twochoice;

		if(trivia[count].getCorrect() == onechoice) { 
			onePoints++;
		}
		if(trivia[count].getCorrect() == twochoice) {
			twoPoints++;
		}
		cout << endl << endl;
	}

	if ( onePoints == twoPoints) {
		cout << "Both players were tied." << endl;
	}
	if ( onePoints > twoPoints) {
		cout << "Player one wins!" << endl;
	}else {
		cout << "Plaer two wins!" << endl;
	}
	cout << "Thanks for playing, press any key to exit.";
	cin >> x;
}

void questionAns(question z[], int count) 
{
	cout << z[count].getQues() << endl;
	cout << z[count].getAnswer1() << endl;
	cout << z[count].getAnswer2() << endl;
	cout << z[count].getAnswer3() << endl;
	cout << z[count].getAnswer4() << endl;
}