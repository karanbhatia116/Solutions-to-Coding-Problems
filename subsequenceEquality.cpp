#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--)
    {
        string s;
    cin>>s;
    int i;
    int a[26],l;
    for(i=0;i<26;i++)
    a[i] = 0;
    l = s.length();
    for(i=0;i<l;i++)
    {
        a[(int)(s[i]-'a')]++;
    }
    for(i=0;i<26;i++)
    {
        if(a[i]>1)
        break;
    }
    if(i!=26)
    cout<<"yes\n";
    else
    cout<<"no\n";
    }
}