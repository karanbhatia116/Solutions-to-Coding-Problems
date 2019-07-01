#include<iostream>
using namespace std;
int main()
{
    int i,j;
    char a[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            cin>>a[i][j];
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(a[i][j]=='l'&&a[i+1][j]=='l'&&a[i+1][j+1]=='l')
                break;
        }
        if(j!=2)
            break;
    }
    if(i!=2)
        cout<<"yes";
}
