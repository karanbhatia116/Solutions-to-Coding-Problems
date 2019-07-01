#include<iostream>
using namespace std;
bool areThree(int n)
{
    int counter=0;
    while(n>0)
    {
        if(n%10==3)
            counter++;
        n/=10;
    }
    if(counter >= 3)
       return true;
    else
        return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,original;
    cin>>N;
    N++;
    while(!areThree(N) )
    {
        N++;
    }
    cout<<N;
    }
}
