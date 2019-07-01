/*sieve of eratosthenes is an algorithm to find out all the prime numbers from 1 to a given number*/
/*First we start with 2 leaving it we strike out all multiples of 2. Then we find out the next non striken number. That is 3 we then strike out all multiples of 3. 
Repeating the process we get all the prime numbers that are non striken.
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   int n;
   cin>>n;
   bool prime[n+1];
   int i;
   for(i=2;i<=n;i++)
   {
       prime[i] = true;
   }
   for(i=2;i<=sqrt(n);i++)
   {
      if(prime[i])
      {
          for(int j=i*i;j<=n;j+=i)
          {
              prime[j] = false;
          }
      }  
   }
   for(i=2;i<=n;i++)
   {
       if(prime[i])
       cout<<i<<" ";
   }
}