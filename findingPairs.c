#include<stdio.h>
void sort(int n,int a[])
{
    int hole,value,i;
    for(i=0;i<n;i++)
    {
        hole=i;
        value=a[hole];
        while(hole>0 && a[hole-1]>=a[hole])
        {
            a[hole]=a[hole-1];
            hole--;
        }
        a[hole]=value;
    }
}
int main()
{
    int flag=0;
    int n,sum;
    scanf("%d %d",&n,&sum);
    int a[n],i,low=0,high=n-1;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        sort(n,a);
    while(a[low]<=a[high])
    {
        if(a[high]+a[low]<sum)
            low++;
        else if(a[high]+a[low]>sum)
            high--;
        else if(a[high]+a[low]==sum)
            {
                flag=1;
                break;
            }
    }
    if(flag)
    printf("%d %d",a[low],a[high]);
    else
        printf("NOT FOUND\n");
}
