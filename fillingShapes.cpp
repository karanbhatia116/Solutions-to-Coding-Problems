#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define MAX 10000
int multiply(long y,int num[],int num_size)
{
   int carry = 0,prod;
   for(int i=0;i<num_size;i++)
   {
       prod = y*num[i] + carry;
       carry = prod/10;
       num[i] = prod%10;
   } 
   while(carry)
   {
     num[num_size] = carry%10;
     carry = carry/10;
     num_size++;
   }            
   return num_size;                                        
}
int power2(int a[],int size,int x)
{
    x--;
  while(x--)
  {
      size = multiply(2,a,size);
  }
  return size;
}
int main()
{
    ios::sync_with_stdio(false);
    int n = 60;
    int a[MAX];
    int size = 1,x;
    if(n%2==0)
    {
     a[0] = 2;
     x = n/2;
     size=power2(a,size,x);
     for(int i=size-1;i>-1;i--)
     cout<<a[i];
    }
    else if (n%2!=0)
    {
        cout<<0;
    }
}
