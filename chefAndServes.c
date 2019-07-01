#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int p1,p2,k;
        scanf("%d %d %d",&p1,&p2,&k);
        if(((p1+p2)/k)%2==0)
             printf("CHEF\n");
        else
            printf("COOK\n");


    }
}
