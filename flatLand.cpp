#include<iostream>
#include<cmath>
using namespace std;
int numberOfSquares(int N)
{
    if(N>0)
    {
        int y = (int)sqrt(N),x;
        x = y*y;
        return (1+numberOfSquares(N-x));
    }
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
    cin>>N;
    cout<<numberOfSquares(N)<<endl;
    }
}
