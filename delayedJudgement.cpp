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
    int a[N][2],i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<2;j++)
            cin>>a[i][j];
    }
    int counter=0;
    for(i=0;i<N;i++)
    {
        if(a[i][1]-a[i][0]>5)
            counter++;
    }
    cout<<counter<<endl;
   }
}
