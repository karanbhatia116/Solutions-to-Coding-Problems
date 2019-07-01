#include<iostream>
using namespace std;
int findMin(int a[],int N)
{
    int min=1000000;
    for(int i=0;i<N;i++)
    {
        if(a[i]<min)
        min = a[i];
    }
    return min;
}
int main()
{
   ios::sync_with_stdio(false);
   int N;
   cin>>N;
   int coin[N];
   int i;
   for(i=0;i<N;i++)
   cin>>coin[i];
   int type[N],coinType1[N],coinType2[N],coinType3[N],count1 = 0,count2 = 0,count3 = 0;
   int j = 0,k = 0,m=0;
   for(i=0;i<N;i++)
   {
       cin>>type[i];
       if(type[i]==1)
        {
            count1+=1;
            coinType1[j++] = coin[i];
        }
       else if(type[i]==2)
        {
            coinType2[k++] = coin[i];
            count2+=1;
        }
       else if(type[i]==3)
        {
            count3+=1;
            coinType3[m++] = coin[i];
        }
   }
   int min3 = 1000000;
   int min12 = 1000000;
   min3 = findMin(coinType3,count3);
   for(i=0;i<count1;i++)
   {
       for(j=0;j<count2;j++)
       {
          if(coinType1[i] + coinType2[j]<min12)
          min12 = coinType1[i] + coinType2[j];
       }
   }
   if(min12>min3 && min3!=1000000)
    cout<<min3<<"\n";
   else if(min12<min3 && min12!=1000000)
     cout<<min12<<"\n";
   else if(min3==1000000)
     cout<<min12<<"\n";
   else 
     cout<<min3<<"\n";

}