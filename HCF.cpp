/*

12 --> 1 2 3 4 6 12
6 --> 1 2 3 6

lcm

12  - 12 24 36 48 60 72
6 - 6 12 18 24 30

*/

#include<iostream>
using namespace std;

int main()
{
    // int a,b,hcf;
    // cout<<"Enter two numbers: ";
    // cin>>a>>b;

    // int min=a>b?b:a;

    // for(int i=1;i<=min;i++)
    // {
    //     if(a%i==0 && b%i==0)
    //     {
    //         hcf=i;
    //     }
    // }

    // cout<<hcf;


    int a,b,lcm;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    int max=a>b?a:b;

    int i=max;
    while(1)
    {
        if(i%a==0 && i%b==0)
        {
            lcm=i;
            break;
        }
        i+=max;
    }

    cout<<lcm;




    
}