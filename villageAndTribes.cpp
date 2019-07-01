#include<iostream>
#include<string.h>
using namespace std;
int StringLen(string s)
{
    int j=0;
    while(s[j]!='\0')
    {
        j++;
    }
    return j;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
    int i,j;
    cin>>s;
    int n=StringLen(s),na=0,nb=0;
    char prev;
    for(i=0;i<n+1;i++)
    {
        if(s[i]=='A')
                na++;
        else if(s[i]=='B')
            nb++;
        else if(s[i]=='.')
        {
            if(i!=0 && s[i-1]!='.')
             {
                 int counter = 0;
                 prev = s[i-1];
            j = i;
            while((s[j]!='A' && s[j]!='B' )&& j<n)
            {
                j++;
                counter++;
            }
            if(s[j] == 'A' && prev == 'A')
                na = na + counter +1;
            else if(s[j]=='B'&&prev == 'B')
                nb = nb + counter+1 ;
            else if(s[j]=='A' && prev=='B')
                na = na+1;
            else if(s[j]=='B'&&prev == 'A')
                nb++;
            i=j;
            }
        }
        else
            continue;

    }
    cout<<na<<" "<<nb<<endl;
   }
}
