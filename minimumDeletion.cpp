//Logic: We will loop till the GCD becomes equal to one or if GCD is not equal to one then it won't be possible to make GCD equal to one 
// by deleting elements;
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int minDel(int N,int a[])
{
    int GCD = __gcd(a[0],a[1]) ,i;
    if(GCD==1)
     return 0;
        for(i=2;i<N;i++)
    {
       GCD = __gcd(a[i],GCD);
       if(GCD==1)
        return 0;
    }
    return -1;
}
int main()
{
    ios::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--)
    {
        int N;
    cin>>N;
    int a[N];
    int i;
    for(i=0;i<N;i++)
    cin>>a[i];
    int minD;
    minD = minDel(N,a);
    cout<<minD<<"\n";
    }
}
