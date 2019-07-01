#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n;
    scanf("%d",&n);
    int p=1,gameOver=0,f=0;
    while(!gameOver && n>1)
    {
        f=1;
      if(n-5!=2 && n-5!=3 && n-5!=5 && n>=5)
          n=n-5;
      else if (n-3!=2 && n-3!=3 && n-3!=5 && n>=3)
          n=n-3;
      else if(n-2!=2 && n-2!=3 && n-2!=5 && n>=2)
         n=n-2;
       if(n<=1)
       {
           gameOver=1;
           break;
       }
       else
       {
           if(p==1)
          p=2;
          else
          p=1;
       }
    }
    if(n==1&&f==0)
    printf("Second\n");
    else
    {
        if(p==1)
    printf("First\n");
    else
    printf("Second\n");}
    t--;
}
}
