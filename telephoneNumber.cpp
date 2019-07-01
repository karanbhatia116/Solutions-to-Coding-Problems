#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--)
    {
        int size;
    cin>>size;
   string s;
   cin>>s;
   int i;
    for(i=0;i<size;i++)
    {
        if(s[i]=='8')
        break;
    } 
    if(size-i>=11)
      cout<<"YES\n";
    else
    {
        cout<<"NO\n";
    }
    
    }
}