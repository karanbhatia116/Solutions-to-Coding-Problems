#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    
    getline(cin,s1);
    getline(cin,s2);
    int l1,l2;
    l1 = s1.length();
    l2 = s2.length();
    string S1[50],S2[50];
    int i,j = 0,prevSpace = 0,count = 1;
    for(i=0;i<=l1;i++)
    {
        if(s1[i]==' ')
        {
            count++;
            
            prevSpace = i;
        }
        S1[j] = s1.substr(prevSpace,i-prevSpace);
        cout<<S1[j]<<"\n";
    }
    // for(i=0;i<count;i++)
    // cout<<S1[i]<<" ";
}


