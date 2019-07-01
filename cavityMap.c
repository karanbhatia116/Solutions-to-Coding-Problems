#include<stdio.h>
int inList(int x,int y,int a[],int b[],int k,int m)
{
    int i,j,ftX=0,F=0,ftY=0;
    for(i=0;i<k;i++)
    {
        if(x==a[i])
            ftX=1;
    }
    for(j=0;j<m;j++)
    {
        if(y==b[j])
            ftY=1;
    }
    if(ftX==1 && ftY==1)
        return 1;
    else
    return F;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    int k=0,m=0,idxR[n],idxC[n];
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if((a[i][j]>a[i][j+1]) && (a[i][j]>a[i][j-1]) &&(a[i][j]>a[i-1][j]) && (a[i][j]>a[i+1][j]) )
              {
                  idxR[k]=i;
                  idxC[m]=j;
              }
        }
    }
    int f;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          f=inList(i,j,idxR,idxC,k,m);
          if(f)
          printf("X");
          else
          printf("%d",a[i][j]);
        }
        printf("\n");
    }
}
