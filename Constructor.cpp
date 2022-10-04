/*

constructor:

1. name is same as class name
2. constructor is a one kind of function that do not have any return type.
3. use - intialize the variable
4. we can not need to call constructor expliciltly.
5. when we create object at a time constructor called automatically.

There are 3 types of construcor.
1. Default constructor
2. Perametrized constructor
3. Copy constructor.


*/



#include<iostream>
using namespace std;


class Employee{

    int department;

    public:
    Employee() // default
    {
        cout<<"Default Constructor called....."<<endl;
        department=4;
    }

    Employee(int dep) // perametrized
    {
        cout<<"Perametrized Constructor called....."<<endl;
        department=dep;
    }

    Employee(Employee &e)
    {
        cout<<"Copy Constructor called....."<<endl;
        department = e.department;

    }

    int getDep()
    {
        return department;
    }

};

int main()
{
    Employee emp;
    cout<<emp.getDep()<<endl;

    Employee emp1(5);
    cout<<emp1.getDep()<<endl;

    Employee emp2(emp);
    cout<<emp2.getDep()<<endl;


}