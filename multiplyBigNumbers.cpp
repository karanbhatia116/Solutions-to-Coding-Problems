#include<iostream>
#include<cmath>
#define MAX 100000
using namespace std;
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
int main()
{
    ios::sync_with_stdio(false);
  long x,y;
  cout<<"Enter 2 big numbers to multiply: ";
  cin>>x>>y;
  int num[MAX];
  int num_size = floor(log10(x) + 1),i=0;
  while(x>0)
  {
      num[i++] = x%10;
      x = x/10;
  }
  num_size = multiply(y,num,num_size);
  for(i=0;i<num_size;i++)
  {
      cout<<num[num_size-1-i];
  }
}

      