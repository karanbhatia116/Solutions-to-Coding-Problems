#include<stdio.h>
int sticks=20,p1,p2,x=1;
void draw(int sticks)
{
    int i;
    for(i=1;i<=sticks;i++)
        printf("| ");
        printf("\n");
}
int input(int x)
{
    printf("Player %d pick number of sticks less than or equal to 4 : ",x);
    if(x==1)
       {
           scanf("%d",&p1);
           return p1;
       }
    else
        {
            scanf("%d",&p2);
            return p2;
        }
}
int main()
{

    printf("C U T - T H E - S T I C K S\n\n");
    int gameOver=0,r;
    while(!gameOver)
    {
        draw(sticks);
        r=input(x);
        while(r>4)
            r=input(x);
        sticks=sticks-r;
        if(sticks<=0)
            break;
        if(x==1)
            x=2;
        else if(x==2)
            x=1;
    }
    printf("Player %d wins!!",x);
}
