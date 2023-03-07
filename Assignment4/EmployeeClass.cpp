#include <iostream>
using namespace std;
class EmployeeClass
{
    private:
    string name;
    int id;
    string department;
    string position;
    public:
    EmployeeClass(){
        this->name = "";
        this->id = 0;
        this->department = "";
        this->position = "";
    };
    EmployeeClass(string name,int id){
        this->name = name;
        this->id = id;
    }
    EmployeeClass(string name,int id ,string department,string position){
        this->name = name;
        this->id = id;
        this->department = department;
        this->position = position;
    }
    void Display(){
        cout << this->name << "-" << this->id << "-" << this->department << "-" << this->position << endl;
    }
};
int main(){
    EmployeeClass emp("Susan Meyers",47899,"Accounting","Vice President");
    EmployeeClass emp1("Mark Jones",39119,"IT","Programmer");
    EmployeeClass emp2("Joy Rogers",81744,"Manuafacturing","Enginner");
    EmployeeClass emp4();
    emp.Display();
    emp1.Display();
    emp2.Display();
    return 0;
}