
#include<stdio.h>
int main()
{
    int n,p=1;
    scanf("%d",&n);
    int remaining=n;
    while(remaining>=2)
    {
       if(remaining-5!=5 && remaining-5!=3 && remaining-5!=2)
       {
           remaining=remaining-5;
           if(p==1)
           p=2;
           else
           p=1;
       }
       else if(remaining-3!=5 && remaining-3!=3 && remaining-3!=2)
       {
           remaining=remaining-3;
           if(p==1)
           p=2;
           else
           p=1;
       }
       else if(remaining-2!=5 && remaining-2!=3 && remaining-2!=2)
       {
           remaining=remaining-2;
           if(p==1)
           p=2;
           else
           p=1;
       }
    }
    if(p==1)
    printf("Second");
    else
    printf("First");
}
