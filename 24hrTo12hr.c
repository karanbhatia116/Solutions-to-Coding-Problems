#include<stdio.h>
void greet(int h,int ampm)
{
    if(!ampm)
        printf("Good Morning :)");
        if(ampm && h==12)
          {
             printf("Good Afternoon :0");
             return;
          }

    else if(ampm && h+12<16)
        printf("Good Afternoon :0");
    else if(ampm && h+12>=16)
        printf("Good Evening ;)");
}
int main()
{
    int h=24,m=60,s=60,ampm=0,flag=0;
    while(h>=24 || m>=60 || s>=60 )
    {
        printf("Enter time in 24-hour time format : ");
        scanf("%d %d %d",&h,&m,&s);
    }
    char *hr[13]={"00","01","02","03","04","05","06","07","08","09","10","11","12"};
    char *mit[10]={"00","01","02","03","04","05","06","07","08","09"};
    char *sect[10]={"00","01","02","03","04","05","06","07","08","09"};
    if(h>=12)
    {
        h=h-12;
        ampm=1;
    }
    if(h==0)
        h=12;
    if(m>0 && m<10 && s>=10)
    {
        flag=1;
        if(ampm)
        printf("%s:%s:%d PM",hr[h],mit[m],s);
        else
            printf("%s:%s:%d AM",hr[h],mit[m],s);
    }
    else if(m>=10 && s<10 && s>0)
    {
        flag=1;
        if(ampm)
            printf("%s:%d:%s PM",hr[h],m,sect[s]);
        else
            printf("%s:%d:%s AM",hr[h],m,sect[s]);
    }
    else if(m<10 && s<10)
    {
        flag=1;
        if(ampm)
            printf("%s:%s:%s PM",hr[h],mit[m],sect[s]);
        else
            printf("%s:%s:%s AM",hr[h],mit[m],sect[s]);
    }
    else if(m>=10 && s>=10)
    {
        flag=1;
        if(ampm)
            printf("%s:%d:%d PM",hr[h],m,s);
        else
            printf("%s:%d:%d AM",hr[h],m,s);
    }
    printf("\n");
    greet(h,ampm);
}
