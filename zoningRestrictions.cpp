#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n,h,m;
    cin>>n>>h>>m;

    int i,a[n+1],x[m+1],l[m+1],r[m+1];
    
    for(i=1;i<=m;i++)
    {
       cin>>l[i]>>r[i]>>x[i];
    }
    
    int j;
    // Making all spots -1 starting from 1
    for(i=1;i<=n;i++)
    a[i] = -1;
    
   //Major Logic
    for(i=1;i<=m;i++)
    {
        
        for(j=l[i];j<=r[i];j++)
        {
            if(a[j]!=-1)
            {
               
                if(a[j]>x[i])
                a[j] = x[i];

            }
            else
            {
                a[j] = x[i];
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==-1)
        a[i] = h;
    }
    int prod = 0;
    for(i=1;i<=n;i++)
    {
        prod = prod + a[i]*a[i];
    }
    cout<<prod;
}