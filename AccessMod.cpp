/*
private
protected
public


*/

#include <iostream>
using namespace std;

class A
{

    int y = 10;

protected:
    int x = 30;

public:
    int z = 50;
};

class B:protected A
{

    public:
    void print()
    {
        // cout<<y<<endl;
        cout << x << endl;
        cout << z << endl;
    }
};

class C:public B{

    public:
    void display()
    {
        // cout<<y<<endl;
        cout << x << endl;
        cout << z << endl;
    }

};

int main()
{
    A obj;
    // cout<<obj.y<<endl;
    // cout<<obj.x<<endl;
    cout << obj.z << endl;

    B b;
    b.print();

    C c;
    c.display();

}