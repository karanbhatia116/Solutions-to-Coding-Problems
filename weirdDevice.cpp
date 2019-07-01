#include<iostream>
using namespace std;
long int multiplier(int N)
{
    return N*13*11*7;
}
int Search(int a[],int x,int N)
{
    int i;
    for(i=0;i<N;i++)
         {
             if(a[i]==x)
                return i;
         }
         return -1;
}
int noOfThreeDigitNumbers(long int N)
{
    int counter = 0,x,idx=0,i;
    int length = 0;
    long int temp = N;
    while(temp>0)
    {
        length++;
        temp = temp/10;
    }
    int a[length];
    for(i=0;i<length;i++)
        a[i] = 0;
        i = 0;
    while(N>0)
    {
        x = N%10;
        idx = Search(a,x,length);
        if(idx ==-1)
            {
                counter++;
                a[i] = x;
                i++;
            }
        N = N/10;
    }
    if(counter == 1)
        return 1;
    return counter*counter*counter;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,K;
    cin>>N>>K;
    cout<<noOfThreeDigitNumbers(multiplier(N))<<endl;
    }
}
