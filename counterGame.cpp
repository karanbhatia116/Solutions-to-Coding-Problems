#include<iostream>
#include<cstdint>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int64_t t;
    cout<<"input\n";
    cin>>t;
    cout<<"successful!\n";
    long long initial = 3,time[t+1],i,counter = 3;
    for(i=1;i<=t;i++)
    {
        if(counter==1)
        {
            time[i] = counter;
            initial = 2*initial;
            counter = initial;
        }
        else
        {
            time[i] = counter;
            counter--;
        }
    }
    cout<<time[t];
}
