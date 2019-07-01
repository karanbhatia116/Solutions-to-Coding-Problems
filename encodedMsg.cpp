#include<iostream>
using namespace std;
void swapC(char *a,char* b)
{
    char t;
    t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
  {
    int N;
    cin>>N;
    char s[N];
    int i;
    for(i=0;i<N;i++)
        cin>>s[i];
    if(N%2!=0)
    {
        for(i=0;i<N-1;i=i+2)
           swapC(&s[i],&s[i+1]);
        for(i=0;i<N;i++)
        {
            s[i] = (char)('z'-s[i]+'a');
        }
    }
    else
    {
        for(i=0;i<N;i=i+2)
            swapC(&s[i],&s[i+1]);
        for(i=0;i<N;i++)
            s[i] = (char)('z'-s[i]+'a');
    }
    for(i=0;i<N;i++)
        cout<<s[i];
        cout<<"\n";
  }
}
