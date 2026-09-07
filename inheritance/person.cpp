#include<iostream>
using namespace std;

class person{
    protected:
    string name;
    int age;
};

class student :  public person{
    int roll_no;
    string course;
    public:
        student(){
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter age: ";
            cin>>age;
            cout<<"Enter roll number: ";
            cin>>roll_no;
        cout<<"Enter course: ";
        cin>>course;
    }
};

int main(){
    student s1;

    return 0;
}