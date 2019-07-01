#include<iostream>
using namespace std;
bool isSorted(int N,int a[])
{
    int i;
    for(i=0;i<N-1;i++)
    {
        if(a[i]>a[i+1])
        return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    int N,D;
    cin>>N>>D;
    int a[N],i,j,count = 0;
    bool impossible = false;
    for(i=0;i<N;i++)
    cin>>a[i];
    for(i=0;i<N;i++)
    {
        for(j=i;j<N;j++)
        {
            if(a[i]-a[j]==D)
            {
               swap(a[i],a[j]);
               count++;
            }
        }
        if(i==0 && count==0)
        {
            impossible = true;
           break;
        }
    }
    if(impossible)
    cout<<-1<<"\n";
    else if(isSorted(N,a))
    cout<<count<<"\n";
    else
    cout<<-1<<"\n";
    

}