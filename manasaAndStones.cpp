#include<iostream>
using namespace std;
int* SumAndAppend(int a[],int x,int o,int b,int n,int y)
{
    if(y<=n)
    {
        int i,j;
    for(j=x;j<y+1;j++)
    {
        for(i=x-y;i<x;i++)
        {
            a[j] = a[i] + o;
            a[j+1] = a[i] + b;
        }
    }
    x = x + y + 1;
    y++;
    SumAndAppend(a,x,o,b,n,y);}
    else
        return a;
}
int main()
{
    int n,o,b,i;
    cin>>n>>o>>b;
    int a[n*n +n] = {0};
    int *p;
    p = SumAndAppend(a,0,o,b,n,1);
    for(i=0;i<(n+1)*n;i++)
        cout<<*(p + i)<<" ";
}
