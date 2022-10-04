/*

a - 2 4 6 33 45 66 77 

odd - 33 45 77
even - 2 4 6 66

*/


#include<iostream>
using namespace std;

int main()
{

    int n;
    cout<<"Enter the elements: ";
    cin>>n;

    int a[10];
    int odd[10];
    int even[10];

    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"-------------------------"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    int oddCount=0,evenCount=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even[evenCount]=a[i];
            evenCount++;
        }else{
            odd[oddCount]=a[i];
            oddCount++;
        }
    }

    cout<<endl<<"_________________________________"<<endl;
    cout<<endl<<"Even Numbers: "<<endl;
    for(int i=0;i<evenCount;i++)
    {
        cout<<even[i]<<" ";
    }

    cout<<endl<<"Odd Numbers: "<<endl;
    for(int i=0;i<oddCount;i++)
    {
        cout<<odd[i]<<" ";
    }

}