#include<stdio.h>
    int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int i,a[n],g,j,d,temp;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    g=gcd(n,k);
    for(i=0;i<g;i++)
    {
        j=i;
        temp=a[i];
        while(1)
        {
            d=(j+k)%n;
            if(d==i)
                break;
            a[j]=a[d];
            j=d;
        }
        a[j]=temp;
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
