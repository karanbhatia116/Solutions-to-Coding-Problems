#include<stdio.h>
#include<string.h>

int alternatingCharacters(char s[])
{

int del=0,l=strlen(s);
for(int i=0;i<l-1;i++)
{
    if((s[i]=='A' && s[i+1]=='A') ||(s[i]=='B' && s[i+1]=='B') )
    {
        del++;
        l--;
        for(int j=i;j<l;j++)
            s[j]=s[j+1];
            for(i=0;i<l;i++)
            i=0;
    }
}
return del;
}
int main()
{
    int q,d;
    scanf("%d",&q);
    char s[100];
    for(int i=0;i<q;i++)
    {
        gets(s);
        printf("%d\n",alternatingCharacters(s));


    }
}
