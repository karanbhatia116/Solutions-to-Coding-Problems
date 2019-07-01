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
        string s;
    cin>>s;
    int i,count = 0,l;
    l = s.length();
    for(i=0;i<l-1;i++)
    {
        if(s[i]=='1')
        {
            if(s[i+1] == '0')
            count++;
        }
        else
        {
            if(s[i+1]=='1')
            count++;
        }
    }
    if(count>2)
    cout<<"non-uniform\n";
    else
    {
        cout<<"uniform\n";
    }
    
    }
}