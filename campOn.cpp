#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int D;
    cin>>D;
    int i,j;
    int a[32][2],d,prob;
    for(i=1;i<=31;i++)
    {
         a[i][0]=i;
        a[i][1]=0;
    }
    for(i=0;i<D;i++)
    {
        cin>>d>>prob;
        a[d][1]=prob;
    }
    int Q;
    cin>>Q;
    while(Q--)
    {
        int deadline,req,counter=0;
    cin>>deadline>>req;
    for(i=1;i<=deadline;i++)
    {
        counter = counter+a[i][1];
    }
    if(counter>=req)
        cout<<"Go Camp\n";
    else
        cout<<"Go Sleep\n";
       }
    }
}
