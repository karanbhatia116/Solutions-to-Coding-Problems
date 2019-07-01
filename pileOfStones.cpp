#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    char op[n];
    for(int i=0;i<n;i++)
    cin>>op[i];
    int numOfStones = 0;
    for(int i=0;i<n;i++)
    {
       if(op[i]=='+')
       numOfStones = numOfStones + 1;
       else if(op[i]=='-')
       numOfStones--;
       while(numOfStones<0)
       {
           numOfStones = numOfStones+1;
       }
    }
    cout<<numOfStones<<"\n";
}