#include<iostream>
#include<string>
using namespace std;
/*Logic:
  Count number of c's , o's, d's,e's,h's,f's
  Suppose
  c = 3,1
  o = 2,1,
  d = 4,3
  e = 2,1
  h = 2,1
  f = 4,3

  Iterate till c becomes 1 or less than one or any other of them become 0 or less than 0 ... c = c-2, o = o-1, d = d-1, e = e-1 , h = h-1, f = f-1*/
int findMin(int c,int o,int d,int e, int h,int f)
{
    int x[6];
    x[0] = c;
    x[1] = o;
    x[2] = d;
    x[3] = e;
    x[4] = h;
    x[5] = f;
    int i,min = 999999;
    for(i=0;i<6;i++)
    {
        if(x[i]<min)
        min = x[i];
    }
    return min;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
    cin>>N;
    string ing[N];
    int i,j,l,c=0,o=0,d=0,e=0,h=0,f=0;
    for(i=0;i<N;i++)
    cin>>ing[i];
    for(i=0;i<N;i++)
    {
        l = ing[i].length();
        for(j=0;j<l;j++)
        {
            if(ing[i][j] == 'c')
            c++;
            else if(ing[i][j]=='o')
            o++;
            else if(ing[i][j] == 'd')
            d++;
            else if(ing[i][j] == 'e')
            e++;
            else if(ing[i][j] == 'h')
            h++;
            else if(ing[i][j] == 'f')
            f++;
        }
    }
    int count=findMin(c,o,d,e,h,f);
    cout<<count<<endl;
    }
}