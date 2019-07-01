#include<stdio.h>
int main()
{
    int time=0,start,toGo,d,n;
    scanf("%d %d %d %d",&n,&start,&toGo,&d);
    int page=start;
    while(page<=n)
    {
        if(toGo>page)
            {
                page=page+d;
                time++;
            }
        else if(toGo<page)
            {
                page=page-d;
                time++;
            }
            else if(page-start<d && toGo>page)
            {
                page=page+page-start;
                time++;
            }
            else if(page-start<d && toGo<page)
            {
                page=start;
                time++;
            }
    }
    if(page==toGo)
        printf("%d",time);
    else
        printf("-1");
}
