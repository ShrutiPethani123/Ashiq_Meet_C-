#include<iostream>
using namespace std;

class Student{

    int id;
    string name;
    int age;
    string address;
    char bloodGroup;
    string gender;

    public:

    void getData()
    {
        cout<<"Enter  id: ";
        cin>>id;
        cout<<"Enter  Name: ";
        cin>>name;
    }

    void display()
    {
        cout<<"------------------------------"<<endl;
        cout<<"Id:  "<<id<<endl;
        cout<<"Name: "<<name<<endl;
    }



};

int main()
{

    Student s1,s2,s3;
    s1.getData();
    s2.getData();
    s3.getData();
    
    s1.display();
    s2.display();
    s3.display();
}