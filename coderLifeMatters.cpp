#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a[30];bool flag=false;
    int counter=0;
    int i;
    for(i=0;i<30;i++)
            cin>>a[i];

    int j;
    for(i=0;i<25;i=i+6)
    {
        if(a[i]==a[i+1]&&a[i+1]==a[i+2]&&a[i+2]==a[i+3]&&a[i+3]==a[i+4]&&a[i+4]==a[i+5]&&a[i+5]==a[i+6]&&a[i+6]==1)
        {
            flag = true;
            break;
        }
    }
    if(flag)
        cout<<"#coderlifematters"<<endl;
    else
        cout<<"#allcodersarefun"<<endl;
   }
}
