#include<iostream>
using namespace std;
/* O(N^2)
  Select an element and search if any first name is repeated. If repeated then return true and so take full name
*/
bool isNamePresent(string name,string firstName[],int N,int idx)
{
    int i;
    for(i=0;i<N;i++)
    {
        if(firstName[i]==name && i!=idx)
        return true;
    }
    return false;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,i;
    cin>>N;
    string firstName[N],lastName[N];
    for(i=0;i<N;i++)
    cin>>firstName[i]>>lastName[i];
    for(i=0;i<N;i++)
    {
       if(isNamePresent(firstName[i],firstName,N,i))
       cout<<firstName[i]<<" "<<lastName[i]<<endl;
       else
       cout<<firstName[i]<<endl;
       
    }
    }
}