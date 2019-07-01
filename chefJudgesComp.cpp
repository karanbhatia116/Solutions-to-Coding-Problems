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
    int a[N],b[N];
    int i;
    for(i=0;i<N;i++)
    cin>>a[i];
    for(i = 0;i < N ; i++)
    cin>>b[i];
    int maxA = -1,maxB = -1 , iA,iB;
    for(i=0;i<N;i++)
    {
        if(a[i]>maxA)
        {
            maxA = a[i];
            iA = i;
        }
    }
    for(i=0;i<N;i++)
    {
        if(b[i]>maxB)
        {
            maxB = b[i];
            iB = i;
        }
    }
    a[iA] = b[iB] = 0;
    int sumA = 0,sumB = 0;
    for(i=0;i<N;i++)
    sumA = sumA + a[i];
    for(i=0;i<N;i++)
    sumB = sumB + b[i];
    
    if(sumA==sumB)
    cout<<"Draw\n";
    else if(sumA<sumB)
    cout<<"Alice\n";
    else
    cout<<"Bob\n";
    }
}