#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int dayNum = 1,count = 1;//start with sunday
    while(a>0 || b>0||c>0)
    {
       if((dayNum==1 || dayNum==2 || dayNum==5)&& a>0)
        a--;
       else if((dayNum==1 || dayNum==2 || dayNum==5)&& a==0)
         break;
       else if((dayNum==3||dayNum==7)&&b>0)
         b--;
       else if((dayNum==3||dayNum==7)&&b==0)
        break;
       else if((dayNum==4||dayNum==6)&&c>0)
         c--;
       else if((dayNum==4||dayNum==6)&&c==0)
         break;
       cout<<a<<" "<<b<<" "<<c<<endl;
        cout<<"day = "<<dayNum<<endl;
        dayNum++;
        if(dayNum==8)
        dayNum = 1;
        cout<<"next day = "<<dayNum<<endl;
        count++;
        cout<<"counter = "<<count<<endl;
    }
    cout<<"Days survived = "<<count<<endl;
}