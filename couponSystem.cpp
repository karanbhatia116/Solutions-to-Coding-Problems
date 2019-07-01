#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][3],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
            cin>>a[i][j];
    }
    int max1=-1,max2=-1,max3=-1,min1=10000,min2=10000,min3=10000;
    for(i=0;i<n;i++)
    {
        if(a[i][1]==1)
        {

            if(max1<=a[i][2] && min1>=a[i][0])
                {
                    max1=a[i][2];
                    min1 = a[i][0];
                }
                else if(max1==a[i][2])
                {
                    if(min1>=a[i][0])
                    {
                        max1 = a[i][2];
                        min1 = a[i][0];
                    }
                }
               else if(max1<a[i][2] && min1<=a[i][0])
                    {
                        max1 = a[i][2];
                        min1 = a[i][0];
                    }
        }
        else if(a[i][1]==2)
                {

                    if(max2<=a[i][2]&&min2>=a[i][0])
                    {
                        max2 = a[i][2];
                        min2 = a[i][0];
                    }
                    else if(max2==a[i][2])
                {
                    if(min2>=a[i][0])
                    {
                        max2 = a[i][2];
                        min2= a[i][0];
                    }
                }
                    else if(max2<=a[i][2] && min2<=a[i][0])
                    {
                        max2= a[i][2];
                        min2= a[i][0];
                    }
                }
        else if(a[i][1]==3)
                {

                    if(max3<=a[i][2] && min3>=a[i][0])
                    {
                        max3=a[i][2];
                        min3 = a[i][0];
                    }
                    else if(max3==a[i][2])
                {
                    if(min3>=a[i][0])
                    {
                        max3 = a[i][2];
                        min3= a[i][0];
                    }
                }
                    else if(max3<=a[i][2] && min3<=a[i][0])
                    {
                        max3 = a[i][2];
                        min3 = a[i][0];
                    }
                }
        }
    cout<<max1<<" "<<min1<<endl;
    cout<<max2<<" "<<min2<<endl;
    cout<<max3<<" "<<min3<<endl;
}
