#include<iostream>
#include<string.h>
using namespace std;
void Sort(string a[],int points[],int goalDifference[])
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(points[j]<points[i])
            {
                swap(points[j],points[i]);
                swap(a[j],a[i]);
                swap(goalDifference[j],goalDifference[i]);
            }
            else if(points[j]==points[i])
            {
                if(goalDifference[i]>goalDifference[j])
                {
                    swap(points[j],points[i]);
                    swap(a[j],a[i]);
                    swap(goalDifference[j],goalDifference[i]);
                }
            }
        }
    }

}
int checkstringindex(string a[],string s)
{
    int i;
    for(i=0;i<4;i++)
    {
        if(a[i]==s)
        return i;
    }
    return -1;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
  {
      string a[4],s,team1,team2;
  int counter=0,i=0,goal1,goal2,points[4],goalDifference[4];
  for(i=0;i<4;i++)
  points[i] = 0;
  for(i=0;i<4;i++)
    a[i] = ".";
    for(i=0;i<4;i++)
        goalDifference[i] = 0;
  i = -1;
  while(counter<12)
  {
      int x1,x2;
      cin>>team1>>goal1>>s>>goal2>>team2;
      x1 = checkstringindex(a,team1);
      if(x1==-1)
          {
              a[++i] = team1;
              x1 = i;
          }
       if(goal1>goal2)
          {
              points[x1] = points[x1] + 3;
          }
          else if(goal1<goal2)
          points[x1] = points[x1] + 0;
          else
           points[x1]++;
        goalDifference[x1] = goalDifference[x1] + goal1-goal2;

       x2 = checkstringindex(a,team2);
       if(x2==-1)
          {
              a[++i] = team2;
          x2 = i;
          }
        if(goal2>goal1)
        points[x2] = points[x2] + 3;
        else if(goal2==goal1)
        points[x2]++;
        goalDifference[x2] = goalDifference[x2] + goal2-goal1;

        counter++;
  }
  Sort(a,points,goalDifference);
     cout<<a[3]<<" "<<a[2]<<endl;
   }
}
