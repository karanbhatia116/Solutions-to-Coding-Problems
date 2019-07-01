#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
         long int N;
    cin>>N;
    int i,j;
    long int A[N],B[N],sum = 0,avg = 0,oddA = 0,oddB = 0;
    for(i=0;i<N;i++)
    {
        cin>>A[i];
        if(A[i]%2!=0)
        oddA++;
        sum+=A[i];
    }
    for(i=0;i<N;i++)
    {
        cin>>B[i];
        if(B[i]%2!=0)
        oddB++;
        sum+=B[i];
    }
    sum = (sum - abs(oddA-oddB))/2;
    cout<<sum<<"\n";
    }
}