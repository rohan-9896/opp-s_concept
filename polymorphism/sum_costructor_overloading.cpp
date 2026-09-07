#include<iostream>
using namespace std;

class Sum
{
    int a,b;
    public:
    Sum(int x,int y)
    {
        a=x;
        b=y;
    }
    Sum(int x,int y,int z)
    {
        a=x;
        b=y+z;
    }
    Sum(double x,float y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"Sum is: "<<a+b<<endl;
    }
};

int main()
{
    Sum s1(10,20);
    s1.display();
    Sum s2(10,20,30);
    s2.display();
    Sum s3(10.5,20.5);
    s3.display();
    return 0;
}