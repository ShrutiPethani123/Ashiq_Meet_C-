#include<iostream>
using namespace std;

int main()
{
    int a[4];

    cout<<"Enter values for array: ";
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<4;i++)
    {
        cout<<a[i]<<" ";
    }

    int max=a[0];
    for(int i=0;i<4;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    cout<<endl<<"Maximum element is: "<<max;
    return 0;
}

/*
1. count even and odd numbers from array.
2. Print all Negative Elements from array.
3. take one element from user and insert into array.
    ( 14 56 7 89 90 45 
    
        ele - 51
        position - 2

        14 56 51 7 89 90 45
    
    )

*/