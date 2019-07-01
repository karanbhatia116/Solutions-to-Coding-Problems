#include<iostream>
using namespace std;
int main()
{
    int value,i,j=1,n;
    cin>>n;
    int a[n];
    a[0] = 0;
    a[1] = 3;
    for(i=j;i<=n;)
    {
        value=a[i];
        while(a[j]-1>1 && j<n)
        {
            a[j+1] = a[j]-1;
            j++;
        }
        i = j+1;
        value = 2*value;
        a[j+1] = value;
    }
    cout<<a[n];
}
