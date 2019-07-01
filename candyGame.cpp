#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
    cin>>N;
    int a[N],i;
    for(i=0;i<N;i++)
        cin>>a[i];
    int sum=0;
    for(i=0;i<N;i++)
        sum = sum+a[i];
    if(sum%2==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
   }
}
