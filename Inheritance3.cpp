/*
multipal 

A   B
  C

  hirarchical 

    A
B       C
    

*/

#include<iostream>
using namespace std;

class A{

    public:
    void methodA()
    {
        cout<<"A class.."<<endl;
    }

    void print()
    {
        cout<<"A..."<<endl;
    }
};

class B{

    public:
    void methodB()
    {
        cout<<"B class.."<<endl;
    }
    void print()
    {
        cout<<"B..."<<endl;
    }

};

class C:public A,public B{

    public:
    void methodC()
    {
        cout<<"C class.."<<endl;
    }
};

// class D:public B,public C{

// };

int main()
{
    // C c1;
    // c1.methodA();
    // // c1.methodB();
    // c1.methodC();


    // A a1;
    // a1.methodA();

    C c1;
    // c1.print();
    c1.A::print();
    c1.B::print();

}


/*

class Shape - getdata(int) 

class Square, - findArea()

    A
B       C
    D

*/