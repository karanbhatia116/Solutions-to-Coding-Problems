#include<iostream>
#define MAX 100000
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
    int a[MAX],i=2,j=0;
    a[0] = 1;
    while(a[j] + i <=N)
    {
        a[j+1] = a[j] + i;
        j++;
        i++;
    }
    cout<<j+1<<"\n";
   }
}