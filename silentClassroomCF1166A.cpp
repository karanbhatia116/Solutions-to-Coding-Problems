#include<bits/stdc++.h>
#include<vector>
#include<string>
#define IO ios::sync_with_stdio(false)
#define forloop(x,n) for(int i=x;i<n;i++)
using namespace std;
int search(string s,vector<string>Class)
{
    if(Class.empty())
    return -1;
    else
    {
        int i;
        string temp;
        for(i=0;i<=Class.size();i++)
        {
            temp = Class[i];
            if(temp[0] == s[0])
            return i;
        }
        return -1;
    }
}
int main()
{
  IO;
  int n = 3;
//   cin>>n;
//   cout<<"n= "<<n<<"\n";
  string name[n] = {"abc","aba","egh"};
//   for(int i=0;i<n;i++)
//   cin>>name[i];
//   for(int i=0;i<n;i++)
//   cout<<name[i]<<"\n";
  vector<string> Class1;
  vector<string>Class2;
  int i,j;
  for(i=0;i<n;i++)
  {
  if(search(name[i],Class1)==-1)
      Class1.push_back(name[i]);
      else
      {
          Class2.push_back(name[i]);
      }
    
      cout<<"Completes search and inserts element\n";
  }
  cout<<"Class 1 size = "<<Class1.size()<<endl;
  cout<<"     Class 1     \n";
  forloop(0,Class1.size())
  cout<<Class1[i]<<" ";
  cout<<"\n";
  cout<<"     Class 2      \n";
  forloop(0,Class2.size())
  cout<<Class2[i]<<" ";
  cout<<"\n";
}