#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--)
    {
        int R,C;
    cin>>R>>C;
    int a[R][C];
    int i,j;
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        cin>>a[i][j];
    }
    int X[R][C];
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        X[i][j] = 0;
    }
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            if(j-1>=0 && j-1<C)
             X[i][j]+=1;
            if(j+1<C && j+1>0)
             X[i][j]+=1;
        }
    }
    for(j=0;j<C;j++)
    {
        for(i=0;i<R;i++)
        {
            if(i-1>=0 && i-1<R)
            X[i][j]++;
            if(i+1<R && i+1>0)
            X[i][j]++;
        }
    }
    // for(i=0;i<R;i++)
    // {
    //     for(j=0;j<C;j++)
    //     cout<<X[i][j];
    //     cout<<"\n";
    // }
    bool isStable = true;
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
           if(X[i][j]<=a[i][j])
             {
                 isStable = false;
                 break;
             }
        }
        if(!isStable)
        break;
    }
    if(isStable)
    cout<<"Stable\n";
    else
    {
        cout<<"Unstable\n";
    }
    
   }
}