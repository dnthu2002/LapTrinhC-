#include <iostream>
#include "TriviaGame.h"
using namespace std;

//mutators
void question::setQues(string q)
{
	ques = q;
}
	
void question::setAnswer1(string a1)
{
	answer1 = a1;
}
	
void question::setAnswer2(string a2)
{
	answer1 = a2;
}

void question::setAnswer3(string a3)
{
	answer1 = a3;
}
	
void question::setAnswer4(string a4)
{
	answer1 = a4;
}

void question::setCorrect(int correct)
{
	correctnum = correct;
}
	
//accessors
string question::getQues() const
{ 
	return ques;
}
	
string question::getAnswer1() const
{ 
	return answer1;
}
	
string question::getAnswer2() const
{ 
	return answer2;
}
	
string question::getAnswer3() const
{ 
	return answer3;
}

string question::getAnswer4() const
{ 
	return answer4;
}

int question::getCorrect() const
{
	return correctnum;
};