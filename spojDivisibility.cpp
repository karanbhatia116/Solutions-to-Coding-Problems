#include<iostream>
using namespace std;

 int main()
 {
     int t;
     cin>>t;
     while(t>0)
     {
         int n,x,y,a=1;
         cin>>n>>x>>y;
         while(a<n)
         {
             if(a%x==0 && a%y!=0)
                cout<<a<<" ";
             a+=1;
         }
         cout<<endl;
         t-=1;
     }
 }
