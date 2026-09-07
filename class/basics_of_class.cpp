#include<iostream>
using namespace std;

class student{
    public:
    student(){
        cout<<"This is my constructor"<<endl;
    } 
    string name;
    string roll_no;
    string department;
    char section;
    int year;
    int number_of_subjects;
    void study(){
        cout<< name << " is studying." << endl;
    }
    ~student(){
        cout<<"This is my destructor"<<endl;
    }

};

int main(){
    student s1;
    s1.name = "John Doe";
    s1.roll_no = "12345";
    s1.department = "Computer Science";
    s1.section = 'A';
    s1.year = 2;
    s1.number_of_subjects = 5;

    cout << "Student Name: " << s1.name << endl;
    cout << "Roll Number: " << s1.roll_no << endl;
    cout << "Department: " << s1.department << endl;
    cout << "Section: " << s1.section << endl;
    cout << "Year: " << s1.year << endl;
    cout << "Number of Subjects: " << s1.number_of_subjects << endl;
    s1.study();

    return 0;
}