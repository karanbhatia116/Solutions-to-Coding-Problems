#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--)
    {
        int N,M;
    cin>>N>>M;
    //N = 3 M = 6
    int d[N], v[N];
    //a[3][2]
    int i,j;
    for(i=0;i<N;i++)
    {
            cin>>d[i]>>v[i];
    }
    //5 7   - dish 1 on day 5 with tastiness 7
    //1 9  - dish 2 on day 1 with tastiness 9
    //2 5  - dish 3 on day 2 with tastiness 5

    //sort not possible 2<N,M<10^5 with 2<T<1000

    //find first maximum and second maximum for tastiness . then check for the days if both are different then we are done else check for another maximum
     
    int max1 = -1,max2=-1 , maxIdx1 = -1,maxIdx2 = -1;
    for(i=0;i<N;i++)
    {
       if(v[i]>max1)
       {
           max1 = v[i];
           maxIdx1 = i;
       }
    }

    //max1 = 9 maxIdx1 = 1
    for(i=0;i<N;i++)
    {
        if(v[i]>max2 && i!=maxIdx1 && d[maxIdx1]!=d[i])
        {
            max2 = v[i];
            maxIdx2 = i;
        }
    }
    //max2 = 7 maxIdx2 = 0
    // while(d[maxIdx1]==d[maxIdx2])
    // {
    //     max2 = -1;
    //     for(i=0;i<N;i++)
    //     {
    //         if(v[i]>max2 && i!=maxIdx1 && i!=maxIdx2)
    //         {
    //             max2 = v[i];
    //             maxIdx2 = i;
    //         }
    //     }
    // }
    int sum = max1 + max2;
    cout<<sum<<"\n";
    }
}