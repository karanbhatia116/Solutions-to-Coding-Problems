#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,V1,V2;
    cin>>N>>V1>>V2;
    double t1,t2;
    t1 = (double)(sqrt(2)*N)/(double)V1;
    t2 = (double)(2*N)/(double)V2;
    if(t1<t2)
    cout<<"Stairs\n";
    else
    cout<<"Elevator\n";
    }
}