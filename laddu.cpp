#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int act,laddus = 0;
    string origin,kind;
    cin>>act>>origin;
    while(act--)
    {
       cin>>kind;
       if(kind=="CONTEST_WON")
       {
           int rank;
           cin>>rank;
           laddus+=320-rank;
       }
       else if(kind == "TOP_CONTRIBUTOR")
       {
           laddus+=300;
       }
       else if(kind=="BUG_FOUND")
       {
           int severity;
           cin>>severity;
           laddus+=severity;
       }
       else
       {
           laddus+=50;
       }
       
    }
    int months ;
    if(origin == "INDIAN")
    months = laddus/200;
    else
    months = laddus/400;
    cout<<months<<"\n";
    }
}