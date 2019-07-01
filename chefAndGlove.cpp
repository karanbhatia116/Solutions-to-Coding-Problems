#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
    cin>>n;
    int i,f[n],g[n],counter=0;
    bool Front=false,Back = false;
    for(i=0;i<n;i++)
        cin>>f[i];
    for(i=0;i<n;i++)
        cin>>g[i];
    for(i=0;i<n;i++)
    {
        if(g[i]<f[i])
            break;
    }
    if(i!=n)
        Front=false;
        else
            Front = true;
        for(i=0;i<n;i++)
        {
            if(g[n-i-1]<f[i])
                break;
        }
        if(i!=n)
            Back = false;
        else
            Back = true;
        if(Front && Back)
            cout<<"both\n";
        else if(Front && !Back)
            cout<<"front\n";
        else if(Back && !Front)
            cout<<"back\n";
        else if(!Front && !Back)
            cout<<"none\n";
      }
}
