#include<iostream>
using namespace std;
int main()
{
    int m[4];
    cin>> m[0]>>m[1] >>m[2]>>m[3];
    
    
    int max = -1;
    int i,maxIdx;
    for(i=0;i<4;i++)
    {
        if(m[i]>max)
        {
            max = m[i];
            maxIdx = i;
        }
    }
    swap(m[3],m[maxIdx]);
    int a,b,c;
    c = m[3]-m[0];
    a = m[3]-m[2];
    b = m[3]-m[1];
    cout<<a<<" "<<b<<" "<<c;
}