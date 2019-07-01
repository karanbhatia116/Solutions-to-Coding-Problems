#include<iostream>
#include<algorithm>
#include<cmath>
#include<random>
#include<time.h>
#define MAX 100000
using namespace std;

int multiply(int x, int res[], int res_size) { 
  
// Initialize carry 
int carry = 0; 
  
// One by one multiply n with 
// individual digits of res[] 
for (int i = 0; i < res_size; i++) { 
    int prod = res[i] * x + carry; 
  
    // Store last digit of 
    // 'prod' in res[] 
    res[i] = prod % 10; 
  
    // Put rest in carry 
    carry = prod / 10; 
} 
  
// Put carry in res and 
// increase result size 
while (carry) { 
    res[res_size] = carry % 10; 
    carry = carry / 10; 
    res_size++; 
} 
return res_size; 
} 

void power(int x, int n)  
{ 
  
//printing value "1" for power = 0 
if(n == 0 ){  
    cout<<"1"; 
    return; 
} 
  
  
int res[MAX]; 
int res_size = 0; 
int temp = x; 
  
// Initialize result 
while (temp != 0) { 
    res[res_size++] = temp % 10; 
    temp = temp / 10; 
} 
  
// Multiply x n times 
// (x^n = x*x*x....n times) 
for (int i = 2; i <= n; i++) 
    res_size = multiply(x, res, res_size); 
  
cout << x << "^" << n << " = "; 
for (int i = res_size - 1; i >= 0; i--) 
    cout << res[i]; 
} 
int main()
{
    ios::sync_with_stdio(false);
    long long p;//input number to check
    cin>>p;
    long long a;//random number for test that is less than p
    srand(time(0));
    bool isPrime = false;//boolean variable to check isPrime
    int T = 3;//number of iterations
    long long pow;
    while(T--)
    {
        a = rand()%p;
        cout<<"a = "<<a<<"\n";
        if(__gcd(a,p)!=1)//if gcd of a and p is not 1 then there exists a factor 
          isPrime = false;
        else
        {
              power(a,p-1);
              cout<<"\n";
              //cout<<"power = "<<power<<"\n";
              //if(power%p==1)
              //isPrime = true;
              //else
              //{
                //  isPrime = false;
              //}
        }
    }
    /*if(isPrime)
    cout<<"Prime\n";
    else
    {
        cout<<"Composite\n";
    }*/
    
}



