#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int i,a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<k;i++)
    {
        int t,j=0;
        t=a[0];
        while(j<n-1)
        {
            a[j]=a[j+1];
            j++;
        }
        a[n-1]=t;
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
//O(N*d)Time Complexity
