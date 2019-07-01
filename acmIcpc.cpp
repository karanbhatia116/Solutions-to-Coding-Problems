#include<iostream>
using namespace std;
int Or(int a,int b)
{
    if(a==0 && b ==0)
        return 0;
    else
        return 1;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int i,j,k,sum=0,Max = -100,counter=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>a[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=0;k<m;k++)
                sum = sum + Or(a[i][k],a[j][k]);
            if(sum>Max)
                Max = sum;
            sum = 0;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            sum =0;
            for(k=0;k<m;k++)
               sum = sum + Or(a[i][k],a[j][k]);
            if(sum==Max)
                counter++;
        }
    }
    cout<<Max<<endl;
    cout<<counter<<endl;
}
