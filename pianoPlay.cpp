#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool isFalse = false;
    int i,n=strlen(s);
    for(i=0;i<n-1;i=i+2)
    {
        if(s[i]==s[i+1])
        {
            isFalse = true;
            break;
        }
        else
            continue;
    }
    if(isFalse)
        cout<<"no";
    else
        cout<<"yes";
}
