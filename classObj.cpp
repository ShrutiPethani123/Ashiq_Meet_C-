#include<iostream>
using namespace std;

class Car{

    public:
    int wheel=4; // data member
    string color;

    
    void run()
    {
        cout<<"Running...."<<endl;
    }

    void milage()
    {
        cout<<"Milage..."<<endl;
    }

};

int main()
{
    Car c1;
    c1.run();
    c1.milage();
    cout<<c1.wheel<<endl;
    c1.color="red";
    cout<<c1.color<<endl;

    Car c2;
    c2.run();
    c2.milage();
    cout<<c2.wheel<<endl;

}






