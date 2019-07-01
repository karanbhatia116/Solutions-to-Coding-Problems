#include<iostream>
using namespace std;
/* Logic:
 First Find the Max element O(N)
 Then Find The maximum remaining by taking remainder with max number O(N)*/
int main()
{
   int N;
   cin>>N;
   int a[N],i,max=-1,maxRem=-1;
   for(i=0;i<N;i++)
   {
       cin>>a[i];
       if(a[i]>max)
       max = a[i];
   }
   for(i=0;i<N;i++)
   {
       if(a[i]%max > maxRem)
       maxRem = a[i]%max;
   }
   cout<<maxRem<<endl;
}