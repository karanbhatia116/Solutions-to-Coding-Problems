#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,i;
        scanf("%d %d",&n,&k);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]<=k)
            {
                k = k - a[i];
                a[i]=1;
            }
            else if(a[i]>k)
                a[i]=0;
        }
        for(i=0;i<n;i++)
            printf("%d",a[i]);
        printf("\n");
    }
}
