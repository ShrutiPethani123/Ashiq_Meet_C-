#include<iostream>
using namespace std;


class A{

    int x=34;

    protected:

    int y=56;

    public:

    int z=45;

};

class B:public A{

    public:

    void display()
    {
        cout<<x<<endl;
        cout<<y<<endl;
        cout<<z<<endl;

    }
};


int main()
{
    A obj;
    cout<<obj.x<<endl;
    cout<<obj.y<<endl;
    cout<<obj.z<<endl;



}