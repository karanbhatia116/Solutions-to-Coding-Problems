#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
    cin>>N;
    int a[N][3],i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<3;j++)
            cin>>a[i][j];
    }
    double loss = 0;
    for(i=0;i<N;i++)
    {
        loss  = loss + (double)a[i][1]*((double)a[i][0]*(double)a[i][2]*(double)a[i][2]/(double)10000);
    }
    cout<<loss<<endl;
   }
}
