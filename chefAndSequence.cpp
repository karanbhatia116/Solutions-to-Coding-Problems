#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,k;
        cin>>n>>k;
        int x,counter=0;
        while(n--)
        {
            cin>>x;
            if(x>1)
                counter=counter+1;
        }
        if(counter<=k)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
