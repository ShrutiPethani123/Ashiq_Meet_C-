#include<iostream>
using namespace std;

class Animal{

   protected:
   int x;
   public:
    void eat()
    {
        cout<<"Eating.."<<endl;
    }
};

class Dog: protected Animal{

    public:
    void bark()
    {
        eat();
        cout<<"Barking..."<<endl;
        cout<<x<<endl;
        eat();
    }
    
};

int main()
{
    Dog d;
    // d.eat();
    d.bark();

    Animal a;
    a.eat();
    // a.bark();

    cout<<d.x;

}

