#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
     char a[n];
     for(int i=0;i<n;i++)
        scanf("%c",&a[i]);
     for(int i=0;i<n;i++)
     {
         if(a[i+1]=='_')
         {
             for(int j=0;j<n;j++)
             {
                 if(a[j]==a[i])
                   {
                       a[i+1]=a[j];
                       a[j]='_';
                   }
              }
        }
     }
     int i;
     for(i=0;i<n;i++)
     {
         printf("%c",a[i]);
}
}
