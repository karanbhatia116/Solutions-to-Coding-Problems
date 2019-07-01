#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,k;
    cin>>n>>k;
    int a[n],i;
    for(i = 0;i<n; i ++)
    cin>>a[i];
    int max = -100;
    int j,sum;
    for(i=0;i<n-k+1;i++)
    {
        sum = 0;
        for(j=i;j<i+k;j++)
        sum = sum + a[j];
        if(sum> max)
        max = sum;
    }
    cout<<max<<endl;
    }
}