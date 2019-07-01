#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,nsmall=0,nlarge=0,i;
        string s;
        cin>>n>>k;
        for(i=0;i<n;i++)
            {
                cin>>s[i];
                if(s[i]>='a' && s[i]<='z')
                    nsmall++;
                else if(s[i]>='A'&&s[i]<='Z')
                    nlarge++;
            }
          if(nsmall>k && nlarge>k)
            cout<<"none\n";
          else if(nsmall<=k && nlarge<=k)
            cout<<"both\n";
          else if(nsmall>nlarge && nlarge<=k)
            cout<<"chef\n";
          else if(nlarge>nsmall && nsmall<=k)
            cout<<"brother\n";
          else if(nlarge==n)
            cout<<"brother\n";
          else if(nsmall==n)
            cout<<"chef\n";
    }
}
