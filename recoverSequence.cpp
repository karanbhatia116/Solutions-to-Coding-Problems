#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int N;
    cin>>N;
    int a[N],i;
    for(i=0;i<N;i++)
        cin>>a[i];
    int countOfErr = 0;
    int d1 = a[1]-a[0];
    int d2 = a[N-1]-a[N-2];
    int d3 = a[N/2] - a[N/2-1];
    int b1[N],b2[N],b3[N],flag;
    for(i=0;i<N;i++)
    b1[i] = a[0] + (i)*d1;
    for(i=0;i<N;i++)
    cout<<b1[i]<<" ";
    cout<<"\n";
    for(i=0;i<N;i++)
    {
        if(a[i]!=b1[i])
        {
            cout<<"XOR = "<<(a[i]^b1[i])<<"\n";
            countOfErr++;
            flag = i;
        }
    } 
    cout<<"countErr = "<<countOfErr<<"\n";
    cout<<"flag = "<<flag<<"\n";
       if(countOfErr == 1)
       {
         a[flag] = a[0] + flag*d1;
       }
/*******b2********/
    
    cout<<"\n";
        for(i=0;i<N;i++)
    b2[i] = a[0] + (i)*d2;
    for(i=0;i<N;i++)
    cout<<b2[i]<<" ";
    cout<<"\n";
    for(i=0;i<N;i++)
    {
        if(a[i]^b2[i])
        {
            cout<<"XOR + "<<(a[i]^b2[i])<<"\n";
            countOfErr++;
            flag = i;
        }
    } 
    cout<<"countErr = "<<countOfErr<<"\n";
    cout<<"flag = "<<flag<<"\n";
       if(countOfErr == 1)
       {
         a[flag] = a[0] + flag*d2;
       }

/***************b3**************/
    for(i=0;i<N;i++)
    b3[i] = a[0] + (i)*d3;
    for(i=0;i<N;i++)
    cout<<b3[i]<<" ";
    cout<<"\n";
    for(i=0;i<N;i++)
    {
        if(a[i]!=b3[i])
        {
            cout<<"XOR + "<<(a[i]^b3[i])<<"\n";
            countOfErr++;
            flag = i;
        }
    } 
    cout<<"countErr = "<<countOfErr<<"\n";
    cout<<"flag = "<<flag<<"\n";
       if(countOfErr == 1)
       {
         a[flag] = a[0] + flag*3;
       }
       for(i=0;i<N;i++)
        cout<<a[i]<<" ";
} 