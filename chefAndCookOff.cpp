#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int a[N][5];
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<5;j++)
            cin>>a[i][j];
    }
    for(i=0;i<N;i++)
    {
        int sum = 0;
        for(j=0;j<5;j++)
            sum = sum+a[i][j];
        if(sum == 0)
            cout<<"Beginner"<<endl;
        else if(sum==1)
            cout<<"Junior Developer"<<endl;
        else if(sum==2)
            cout<<"Middle Developer"<<endl;
        else if(sum==3)
            cout<<"Senior Developer"<<endl;
        else if(sum==4)
            cout<<"Hacker"<<endl;
        else if(sum==5)
            cout<<"Jeff Dean"<<endl;
    }
}
