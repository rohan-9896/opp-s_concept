#include<iostream>
using namespace std;

class student{
    string name;
    int roll_no;
    string department;
    char section;
    int year;
    int number_of_subjects;

    public:

    void get(){
        cout<<"Enter your name : ";
        cin>>name;
        cout<<"Enter your roll number : ";
        cin>>roll_no;
        cout<<"Enter your department : ";
        cin>>department;
        cout<<"Enter your section : ";
        cin>>section;
        cout<<"Enter your year : ";
        cin>>year;
        cout<<"Enter number of subjects : ";
        cin>>number_of_subjects;
    }
    void display(){
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
        cout << "Department: " << department << endl;
        cout << "Section: " << section << endl;
        cout << "Year: " << year << endl;
        cout << "Number of Subjects: " << number_of_subjects << endl;
    }
};

int main(){
    student s1;
    s1.get();
    s1.display();

    return 0;
}