#include<iostream>
#include<process.h>
 
using namespace std;
 
int main()
{
    int a[50],x,n,i,j,b[50];
    cout<<"How many elements of Array you want to create?";
    cin>>n;
    cout<<"\nEnter elements of Array\n";
    
    for(i=0;i<n;++i)
        cin>>a[i];
        
    cout<<"\nEnter element to delete:";
    cin>>x;
    
    for(i=0,j=0;i<n;++i)
    {
        if(a[i]!=x)
            b[j++]=a[i];
    }
 
    if(j==n)
    {
        cout<<"\nSoory!!!Element is not in the Array";
        exit(0);
    }
    else
    {
        cout<<"\nNew Array is ";
        for(i=0;i<j;i++)
            cout<<b[i]<<" ";
    }
 
    return 0;
}
