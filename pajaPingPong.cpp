#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        int x,y,k;
    cin>>x>>y>>k;
    int sum = x + y;
    if((sum/k)%2 == 0)
    cout<<"Chef\n";
    else
    {
        cout<<"Paja\n";
    }
    }
}