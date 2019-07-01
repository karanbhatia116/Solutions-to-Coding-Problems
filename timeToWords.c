#include<stdio.h>
int main()
{
    int hr,mi,sec,ampm=0;
    printf("Enter time in 24-hour time format separated by space : ");
    scanf("%d %d %d",&hr,&mi,&sec);
    if(hr>12)
        {
            ampm=1;
            hr=24-hr;
        }
     if(ampm==0)
     {
         printf("%d:%d:%d AM",hr,mi,sec);
         printf("\n GOOD MORNING! :)");
     }
     else if(hr<4 && ampm==1 )
     {
         printf("%d:%d:%d PM",hr,mi,sec);
         printf("\n GOOD AFTERNOON :|");
     }
     else if(hr>=4 && ampm==1)
     {
         printf("%d:%d:%d PM",hr,mi,sec);
         printf("\n GOOD EVENING ;)");
     }
}
