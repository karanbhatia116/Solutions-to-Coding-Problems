#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int x1,y1,x2,y2,r1,r2,t;
    cin>>t;
    while(t--)
    {
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
    //M = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) - r2*r2;
    //N =  (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) - r1*r1;
    //cout<<M<<" "<<N<<endl;
    if(sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))==abs(r1-r2))
        cout<<"E\n";
       else  if((sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))<r1 && sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))>r2) || sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))<r2 && sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))>r1)
        cout<<"I\n";
    else
        cout<<"O\n";
    }
}
