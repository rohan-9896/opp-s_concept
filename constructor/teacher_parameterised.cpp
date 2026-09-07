#include<iostream>
using namespace std;

class Teacher{
// attributes and properties
string name;
string depart;
string subject;
double salary;

public:
Teacher(string name,string depart,string subject,double salary){
    this->name=name;
    this->depart=depart;
    this->subject=subject;
    this->salary=salary;
    cout<<"hello i am a parameterised constructor";
}
// member function/method

void change_depart(string depart){
this->depart=depart;
}
/*void input(){
cout<<"Enter  name : ";
cin>>name;
cout<<"Enter  department : ";
cin>>depart;
cout<<"Enter  subject : ";
cin>>subject;
cout<<"Enter  salary : ";
cin>>salary;
}
*/
void show(){
cout<<"Your name is : "<<name<<endl;
cout<<"Your department is : "<<depart<<endl;
cout<<"Your subject is : "<<subject<<endl;
cout<<"Your salary is : "<<salary<<endl;
}
};

int main(){
Teacher t1("John", "Mathematics", "Calculus", 50000);
t1.change_depart("cse");
t1.show();
return 0;
}