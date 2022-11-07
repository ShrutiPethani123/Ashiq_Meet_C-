/*
Binary Operator Overloading:

1+2i
3+5i
________
4 + 7i

*/

#include<iostream>
using namespace std;

class Complex{

    int real;
    int img;

    public:
    void input()
    {
        cout<<"Enter Real Number: ";
        cin>>real;
        cout<<"Enter img Number: ";
        cin>>img;
    }

    void display()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }

    Complex operator +(Complex c2)
    {
        Complex temp;
        temp.real = real + c2.real;
        temp.img=img+c2.img;
        return temp;
    }

};

int main()
{
    Complex c1,c2;
    c1.input();
    c2.input();
    c1.display();
    c2.display();
    Complex ans = c1+c2;
    ans.display();

}