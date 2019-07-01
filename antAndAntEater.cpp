
#include<iostream>
using namespace std;
int main()
{
   int R,C;
   cin>>R>>C;
   char s[R][C];
   int i,j;
   for(i=0;i<R;i++)
   {
       for(j=0;j<C;j++)
       cin>>s[i][j];
   }    
   int count = 0;
   for(i=0;i<R;i++)
   {
       for(j=0;j<C;j++)
       {
           if(s[i][j]=='U')
           {
               if(i-1<0)
               {
                   s[i][j]= '-';
               }
            //    else if(i-1>0 && (s[i-1][j]=='U'|| s[i-1][j] =='D' || s[i-1][j]=='R' || s[i-1][j]=='L'))
            //    {
            //        count++;
            //    //to add    
            //    }
               else if(i-1>0 && s[i-1][j]=='-')
               {
                s[i-1][j] = s[i][j];
                s[i][j] = '-';
               }
               else if(i-1>0 && s[i-1][j]=='#')
               {
                   s[i][j] = '-';
               }
           }
           else if(s[i][j] == 'D')
           {
               if(i+1>=R || (i+1<R && s[i+1][j] == '#'))
               {
                 s[i][j] = '-';
               }
            //    else if(i+1<R && (s[i+1][j]=='U'|| s[i+1][j] =='D' || s[i+1][j]=='R' || s[i+1][j]=='L') )
            //    {
            //        count++;
            //        //to add
            //    }
               else if(i+1<R && s[i+1][j]=='-')
               {
                   s[i+1][j] = s[i][j];
                   s[i][j] = '-';
               }
           }
           else if(s[i][j]=='R')
           {
               if(j+1>=C || (j+1<C && s[i][j+1]=='#'))
               {
                   s[i][j]='-';
               }
            //    else if(j+1<C && (s[i][j+1]=='U'|| s[i][j+1] =='D' || s[i][j+1]=='R' || s[i][j+1]=='L'))
            //    {
            //        count++;
            //        //to add
            //    }
               else if(j+1<C && s[i][j+1]=='-')
               {
                   s[i][j+1] = s[i][j];
                   s[i][j] = '-';
               }
           }
           
           else if(s[i][j]=='L')
           {
               if(j-1<0 || (j-1>0 && s[i][j-1]=='#'))
               {
                   s[i][j]='-';
               }
            //    else if(j-1>0 && (s[i][j-1]=='U'|| s[i][j-1] =='D' || s[i][j-1]=='R' || s[i][j-1]=='L'))
            //    {
            //        count++;
            //        //to add
            //    }
               else if(j-1>0 && s[i][j-1]=='-')
               {
                   s[i][j-1] = s[i][j];
                   s[i][j] = '-';
               }
           }
       }
   }
}