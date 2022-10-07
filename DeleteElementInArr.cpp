#include<iostream>
using namespace std;


int main()
{
    int a[5]={10,22,35,43,52};

    int ele;
    cout<<"Enter ele do you want to delete? ";
    cin>>ele;

    int index=-1;
    for(int i=0;i<5;i++)
    {
        if(a[i]==ele)
        {
            index=i;
        }
    }

    if(index==-1)
    {
        cout<<"Element not present in array"<<endl;
    }else{

        for(int i=index;i<5;i++)
        {
            a[i]=a[i+1];
            //a[2]=a[3]
            // a[3]=a[4]
        }

        cout<<"After deletion..."<<endl;
        for(int i=0;i<4;i++)
        {
            cout<<a[i]<<" ";
        }
    }
}