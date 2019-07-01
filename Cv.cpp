#include<iostream>
using namespace std;
bool isVowel(char c)
{
   return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}
int main()
{
    ios::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--)
    {
        int N;
    cin>>N;
    char s[N];
    int i,count=0;
    for(i=0;i<N;i++)
    cin>>s[i];
    for(i=0;i<N-1;i++)
    {
        if(!isVowel(s[i])&&isVowel(s[i+1]))
        {
            count++;
        }
    }
    cout<<count<<"\n";
   }
}