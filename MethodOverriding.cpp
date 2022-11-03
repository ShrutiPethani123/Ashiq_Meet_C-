/*
Method Ovrloading           Method Overriding

-> compile time             -> Run time
-> same class               -> Parent - child relationship class
-> argument must be different -> argument should be same
*/


#include<iostream>
using namespace std;

class Animal{

    public:
    void eat()
    {
        cout<<"Eating..."<<endl;
    }

    void run()
    {
        cout<<"Running"<<endl;
    }

};

class Dog : public Animal{

    public:
    void eat()
    {
        cout<<"Dog Eating.."<<endl;
    }

    void bark()
    {
        cout<<"Barking ... "<<endl;
    }

};

int main()
{

    Animal a;
    Dog d;

    a.eat();
    d.eat();

    Animal *bptr;
    Dog *dptr;

    bptr=&a;
    cout<<"Base class pointer assign base class object"<<endl;
    bptr->eat();
    bptr->run();
    // bptr->bark(); // invalid

    bptr=&d;
    cout<<"Base class pointer assign derived class object"<<endl;
    bptr->eat();
    bptr->run();
    // bptr->bark(); // invalid

    // dptr=&a; // invalid

    dptr=&d;
    cout<<"Derived class pointer assign Derived class object"<<endl;
    dptr->eat();
    dptr->run();
    dptr->bark();





}