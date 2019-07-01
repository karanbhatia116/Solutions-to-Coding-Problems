#include<iostream>
using namespace std;
int checkstringindex(string a[],string s)
{
    int i;
    for(i=0;i<4;i++)
    {
        if(a[i]==s)
        return i;
    }
    return -1;
}
int main()
{
    string a[4] = {"manutd","fcbarca","lyon","arsenal"};
    string s = "lyon";
    cout<<checkstringindex(a,s);
}
