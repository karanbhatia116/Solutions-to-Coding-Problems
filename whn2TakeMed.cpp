#include<iostream>
using namespace std;
int main()
{
  int y,m,d;
  scanf("%d:%d:%d",&y,&m,&d);
  int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
  if((y%4 == 0 && y%100!=0) || y%400==0)
  month[2] = 29;
  if(month[m]==31)
  {
    if(d%2!=0)
    d--;
    cout<<"Number of Days = "<<(32-d)/2;
  }
  else if(month[m]==29)
  {
    if(d%2!=0)
    d--;
    cout<<"Number of Days = "<<(30-d)/2;
  }
  else
  {
    if(d%2!=0)
    d--;
    cout<<"Number of Days = "<<(30-d)/2 + 16;
  }
}