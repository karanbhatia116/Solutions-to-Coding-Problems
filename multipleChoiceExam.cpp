#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--)
    {
        int N;
    cin>>N;
    string S;
    cin>>S;
    string U;
    cin>>U;
    int i = 0,points = 0;
    while(i<N)
    {
        if(U[i]=='N')
        i++;
        else if(U[i]==S[i])
        {
            points++;
            i++;
        }
        else if(U[i]!=S[i])
        {
            i = i+2;
        }
    }
    cout<<points<<"\n";
   }
}