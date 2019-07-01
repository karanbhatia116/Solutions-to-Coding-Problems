#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int T;
    cin>>T;
    while(T--)
    {
      int n;
      double percentage;
     cin>>n;
     char s[n];
    int i;
    int count = 0,pCount = 0;
    bool printed = false;
    for(i=0;i<n;i++)
    cin>>s[i];
    for(i=0;i<n;i++)
    {
        if(s[i]=='P')
        count++;
    }
    percentage = (double)count/(double)n;
    if(percentage>=0.75 || 0.75 - percentage<=0.001)
    {
        cout<<pCount<<"\n";
        printed = true;
    }
    else
    {
      for(i=2;i<n-1;i++)
     {
        if(s[i]=='A')
        { 
            if((s[i-1]=='P'&&s[i-2]=='P')&&(s[i+1]=='P'||s[i+2]=='P'))
            {
                s[i] = 'p';
                pCount++;
            }
            percentage = (double)(count+pCount)/(double)n;
            if(percentage>=0.75 || 0.75-percentage<=0.001)
            break;
        }
     }
     if(i!=n-1)
     {
     cout<<pCount<<"\n";
     printed = true;
     }
     else
     {
         printed = false;
     }
     
    }
    
    if(!printed)
     cout<<-1<<"\n";
    
   }
}