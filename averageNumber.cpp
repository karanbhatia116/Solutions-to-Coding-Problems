#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int V,N,K;
    cin>>N>>K>>V;
    int a[N],sum=0;
    for(int i=0;i<N;i++)
        {
            cin>>a[i];
            sum = sum+a[i];
        }
        int x = (V*(N+K)-sum);
        if(x%K!=0)
            x = -1;
        else if(x/K<0)
            x = -1;
        else
            x = x/K;
        cout<<x<<endl;

   }
}
