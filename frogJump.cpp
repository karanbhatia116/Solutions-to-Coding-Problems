#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long int jump=0,a,b,k,x=0;
    while(t--)
    {
     cin>>a>>b>>k;
    while(jump<k)
    {
        if(jump%2==0)
        {
            jump++;
            x=x+a;
        }
        else
        {
            jump++;
            x=x-b;
        }
    }
    cout<<x<<endl;
}
}
