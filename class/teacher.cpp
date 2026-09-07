#include<iostream>
using namespace std;

class Teacher{
// attributes and properties
string name;
string depart;
string subject;
double salary;

public:
// member function/method

void change_depart(string depart){
this->depart=depart;
}
void input(){
cout<<"Enter  name : ";
cin>>name;
cout<<"Enter  department : ";
cin>>depart;
cout<<"Enter  subject : ";
cin>>subject;
cout<<"Enter  salary : ";
cin>>salary;    
}

void show(){
cout<<"Your name is : "<<name<<endl;
cout<<"Your department is : "<<depart<<endl;
cout<<"Your subject is : "<<subject<<endl;
cout<<"Your salary is : "<<salary<<endl;
}
};

int main(){
Teacher t1;
string dept;
t1.input();
cout<<"Before changing department : "<<endl;
cin>>dept;
t1.change_depart(dept);
t1.show();
return 0;
}