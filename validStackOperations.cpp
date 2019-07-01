#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
    cin>>n;
    int i,a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    int elements = 0;
    i=0;
    while(i<n)
        {
           if(a[i]==1)
           elements++;
           else if(a[i]==0)
           elements--;
           if(elements<0)
           break;
           i++;
        }
        if(i==n)
        cout<<"Valid\n";
        else 
        cout<<"Invalid\n";
    }
}