#include <string>
#include <iostream>
using namespace std;

class question
{
private:
	string ques;
	string answer1;
	string answer2;
	string answer3;
	string answer4;
	int correctnum;
public:
void setQues(string ques);
void setAnswer1(string a1);
void setAnswer2(string a2);
void setAnswer3(string a3);
void setAnswer4(string a4);
void setCorrect(int correct);
string getQues() const;
string getAnswer1() const;
string getAnswer2() const;
string getAnswer3() const;
string getAnswer4() const;
int getCorrect() const;
};