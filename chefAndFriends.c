#include<stdio.h>
#include<string.h>
void getSubstring(char a[],int pos, int len,char*s)
{
    if(pos+len-1>strlen(a))
        s = NULL;
    else
    {
        int i;
        for(i=pos;i<pos+len;i++)
            s[i] = a[i];
    }
}
int main()
{
    char a[4]="chef";
    char s1[2];
    char s2[2];
    getSubstring(a,0,2,s1);
    getSubstring(a,2,4,s2);
    puts(s1);
    puts(s2);
    char s[30],temp[2];
    gets(s);
    int i,count=0;
    int n=strlen(s);
    for(i=0;i<n-1;i++)
    {
        getSubstring(s,i,i+2,temp);
        if(temp == s1 || temp==s2)
            count++;
    }
    printf("%d",count);
}
