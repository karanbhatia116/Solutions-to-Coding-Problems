#include<iostream>
#include<cmath>
using namespace std;
void BubbleSort(int a[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
                swap(a[j],a[i]);
        }
    }
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,K;
    cin>>N>>K;
    int i,a[N];
    for(i=0;i<N;i++)
        cin>>a[i];
       BubbleSort(a,N);
    int medIdx = (N + K + 1)/2-1,med;
    for(i=0;i<N;i++)
    {
        if(i ==medIdx)
            {
                med = a[i];
                break;
            }
    }
    cout<<med<<endl;
   }
}
