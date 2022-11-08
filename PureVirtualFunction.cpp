#include<iostream>
using namespace std;

class A{

    public:
    virtual void display()=0;

};

class B:public A{

    public:
    void display()
    {
        cout<<"Pure Virtual Function.."<<endl;
    }
};

int main()
{
    A *bptr;
    B b;
    bptr=&b;
    bptr->display();


}