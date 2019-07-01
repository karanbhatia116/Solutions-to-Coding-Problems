#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--)
    {
        int N,X,S;
        cin>>N>>X>>S;
        int A,B,curr = X;
        while(S--)
        {
            cin>>A>>B;
            if(A==curr && B==curr || A!=curr && B!=curr)
            curr = curr;
            else if(A==curr && B!=curr)
            curr = B;
            else if(A!=curr && B==curr)
            curr = A;
        }
      cout<<curr<<"\n";
    }
}