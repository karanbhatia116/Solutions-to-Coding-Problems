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
int main()
{
    string s,s1;
    cin>>s;
    int i,n=stringLength(s);
    i=;
    s1 = s.substr(i,2);
    cout<<s1;
}
