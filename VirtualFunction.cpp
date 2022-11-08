#include<iostream>
using namespace std;

class X{

    public:

    virtual void print()
    {
        cout<<"class X Method..."<<endl;
    }
};

class Y : public X{

    public:

    void print()
    {
        cout<<"class Y Method..."<<endl;
    }

};

int main()
{
    X x;
    Y y;
    X *bptr;
    Y *dptr;

    bptr= &y;
    bptr->print();
    x.print();




}