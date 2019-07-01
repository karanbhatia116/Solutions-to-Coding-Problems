#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        long long int N,Q;
    cin>>N>>Q;
    long long int a[N],i;
    for(i=0;i<N;i++)
    a[i] = i+1;
    long long int t,s = 0,sum = 0;
    while(Q>0)
    {
        cin>>t;
        if(t==1)
        {
            int y;
            cin>>y;
            a[y+s-1] = 0;

        }
        else if(t==2)
        {
            int p,q,max = -1;
            cin>>p>>q;
            for(i=p+s-1;i<q+s;i++)
            {
                if(a[i]>max)
                max = a[i];
            }
            sum = sum + max;
            cout<<max<<"\n";
        }
        s = sum%N;
        Q-=1;
    }
  }
}