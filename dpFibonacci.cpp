#include<iostream>
using namespace std;
int fib(int n,int memo[])
{
    int result;
    if(memo[n]!=NULL)
        return memo[n];
    if(n==1 || n==2)
        result=1;
        else
            result = fib(n-1,memo) +fib(n-2,memo);
        return result;
}
int main()
{
    int n;
    cin>>n;
    int memo[n]={NULL};
    cout<<fib(n,memo);
}
