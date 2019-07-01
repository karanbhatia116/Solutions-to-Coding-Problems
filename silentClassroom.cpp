#include<bits/stdc++.h>
using namespace std;
int search(string s,vector<string>Class1)
{
    if(Class1.empty())
    return -1;

    else
    {
        int i;
        string temp;
        for(i=0;i<Class1.size();i++)
        {
            temp = Class1[i];

            if(temp[0] == s[0])
            return i;
        }
        return -1;
    }
}
int searchChar(char c[],char x,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(x==c[i])
            return i;
    }
    return -1;
}
int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    string s[n];
    int i;
    for(i=0;i<n;i++)
         cin>>s[i];

  vector<string> Class1;
  vector<string> Class2;
  vector<string> name;
  int flag = 1;
  for(i=0;i<n;i++)
    name.push_back(s[i]);
  for(i=0;i<n;i++)
  {

      if(search(s[i],Class1)==-1)
            {
                Class1.push_back(s[i]);
                flag = 1;
             }
      else if(search(s[i],Class2)==-1)
        {
            Class2.push_back(s[i]);
            flag = 2;
        }
      else if(search(s[i],Class1)!=-1 && search(s[i],Class2)!=-1)
      {
          if(flag==1)
          {
              Class2.push_back(s[i]);
            flag = 2;
          }
          else
          {
              Class1.push_back(s[i]);
            flag = 1;
          }
      }

  }

    int minPairs = 0,counter=0 ;

    int j=0;
    char c1[Class1.size()];
    for(i=0;i<Class1.size();i++)
    {
        string temp;
        temp  = Class1[i];
        if(searchChar(c1,temp[0],j)==-1)
           c1[j++] = temp[0];
    }

    int k;
  for(i=0;i<j;i++)
  {
      counter = 0;
      for(k=0;k<Class1.size();k++)
      {
          string temp;
          temp = Class1[k];
          if(temp[0]==c1[i])
            counter++;
      }
      minPairs = minPairs + (counter*(counter-1))/2;
  }

   char c2[Class2.size()];
    for(i=0;i<Class2.size();i++)
    {
        string temp;
        temp  = Class2[i];
        if(searchChar(c2,temp[0],j)==-1)
           c2[j++] = temp[0];
    }
  for(i=0;i<j;i++)
  {
      counter = 0;
      for(k=0;k<Class2.size();k++)
      {
          string temp;
          temp = Class2[k];
          if(temp[0]==c2[i])
            counter++;
      }
      minPairs = minPairs + (counter*(counter-1))/2;
  }
cout<<minPairs<<endl;
}
