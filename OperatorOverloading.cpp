// unary operator ++ overloading

#include<iostream>
using namespace std;

class Test{

    int a;
    int b;

    public:
    Test()
    {
       a=5;
       b=6; 
    }

    void operator ++()
    {
        a=a+3;
        b=b+3;
    }

    void operator ++(int)
    {
        a=a+4;
        b=b+4;
    }

    void display()
    {
        cout<<"a="<<a<<" "<<"b="<<b<<endl;
    }

};

int main()
{
    Test t;
    cout<<"Before increment: "<<endl;
    t.display();
    t++;
    cout<<"After increment: "<<endl;
    t.display();




}