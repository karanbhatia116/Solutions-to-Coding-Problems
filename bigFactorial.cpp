#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
int multiply(int x,int num[],int num_size)
{
    int carry = 0;
    int prod;
     /*1 2                             2 1
     1 2 4                         4 2 1    
    x    5                       x 5
                                  -------
                                   0 2 6
    -------
    6 2 0      carry = 2
               carry = 1    
    2 4                             4 2
    1 2 4                         4 2 1
                                 
  x   1 0        carry = 4     x 10
  --------       carry = 2      ---------
   1 2 4 0                       0 4 2 1

    */

   int i;
   for(i=0;i<num_size;i++)
   {
     prod = num[i]*x + carry;
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
/*int multiply(int num[],int x,int num_size)
{
   int carry = 0,prod;
   for(int i=0;i<num_size;i++)
   {
       prod = num[i]*x + carry;
       carry = prod/10;
       num[i] = prod%10;
   }
   while(carry)
   {
       num[num_size] = carry%10;
       carry = carry/10;
       num_size ++;
   }
   return num_size;
}*/
void factorial(int n)
{
    int num[MAX];
    num[0] = 1;
    int num_size = 1;
    for(int i=2;i<=n;i++)
    {
        num_size = multiply(i,num,num_size);
    }
    for(int i = num_size-1;i>-1;i--)
    cout<<num[i];
}
int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    factorial(n);
    return 0;
}