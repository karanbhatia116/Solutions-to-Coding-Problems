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
    int i,l,pair = 0;
    l = s.length();
    for(i=0;i<l;i++)
    {
        if(s[i]=='>')
        s[i] = '<';
        else if(s[i]=='<')
        s[i] = '>';
    }
    for(i=0;i<l-1;i++)
    {
        if(s[i]=='>' && s[i+1]=='<')
        pair += 1;
    }
    cout<<pair<<"\n";
    }
}