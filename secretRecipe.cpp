#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        float X1,X2,X3,v1,v2;
    cin>>X1>>X2>>X3>>v1>>v2;
    float t1,t2;
    t1 = abs(X1-X3)/v1;
    t2 = abs(X2-X3)/v2;
    if(t1<t2)
        cout<<"Chef"<<endl;
    else if(t1>t2)
        cout<<"Kefa"<<endl;
    else
        cout<<"Draw"<<endl;
  }
}
