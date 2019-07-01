#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,M,score = 0;
    cin>>N>>M;
    bool a[N][M];
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        a[i][j] = false;
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
          if(i>0 && a[i-1][j]==true)
          score++;
          if(i<N-1 && a[i+1][j]==true)
          score++;
          if(j>0 && a[i][j-1]==true)
          score++;
          if(j<M-1 && a[i][j+1]==true)
          score++;

          a[i][j] = true; 
        }
    }
    cout<<score<<"\n";
   }
}