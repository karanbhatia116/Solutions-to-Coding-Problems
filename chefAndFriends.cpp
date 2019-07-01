#include<iostream>
#include<string.h>
using namespace std;
int stringLength(string s)
{
    int counter=0,i=0;
    while(s[i]!='\0')
    {
        counter++;
        i++;
    }
    return counter;
}
bool isFriend(string s)
{
    string s1,s2="ch",s3="ef",s4="he";
    int i,j=0,n=stringLength(s);
    for(i=0;i<n-1;i++)
    {
        s1 = s.substr(i,2);
        if(s1==s2 || s1==s3||s1==s4)
            j++;
    }
    if(j>0)
        return true;
    else
        return false;
}
int main()
{
    int n,friends=0;
    cin>>n;
    while(n--)
    {
        string s;
       cin>>s;
       if(isFriend(s))
            friends++;
      }
      cout<<friends;
}
