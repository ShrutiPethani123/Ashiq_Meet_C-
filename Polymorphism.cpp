/*
polymorphism - many forms

Types of polymorphism

1. Compile time  (Early binding , static polymorphism )
    1. Method overloading 
    2. Operator Overloading
2. Run time (Late binding  , dynamic polumorphism)
    1. Method overriding



*/

#include<iostream>
using namespace std;

class Calculator{

    public:

    void add(int a)
    {
        cout<<"add-> "<<a+3<<endl;
    }

    void add(int x,int y)
    {
        cout<<"add x+y -> "<<x+y<<endl;
    }

    void add(float x,float y)
    {
        cout<<"add float x+y -> "<<x+y<<endl;
    }

    void add(int a,float b)
    {
        cout<<"add  int float x+y -> "<<a+b<<endl;
    }

    void add(float c , int )

};

int main()
{
    Calculator c;
    c.add(5);
    c.add(2,5);
    c.add(2.5f,5.2f);
    c.add(3,4.5f);
    // c.add(2.4f,4);

}