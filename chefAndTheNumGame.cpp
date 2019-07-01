 #include<iostream>
 using namespace std;
 int main()
 {
     ios::sync_with_stdio(false);
     int T;
     cin>>T;
     while(T--)
     {
         int N;
     cin>>N;
     int i,a[N],countNeg=0,countPos=0;
     for(i=0;i<N;i++)
     cin>>a[i];
     for(i=0;i<N;i++)
     {
         if(a[i]<0)
         countNeg++;
         else if(a[i]>=0)
         countPos++;
     }
     int maxGrp, minGrp;
     if(countPos>0 && countNeg>0)
     {
         if(countPos>countNeg)
         {
             maxGrp = countPos;
             minGrp = countNeg;
         }
         else
         {
             maxGrp = countNeg;
             minGrp = countPos;
         }
     }
     else 
     {
         if(countPos>0)
         {
             maxGrp = countPos;
         minGrp = countPos;
         }
         else
         {maxGrp = countNeg;
         minGrp = countNeg;}
     }
     cout<<maxGrp<<" "<<minGrp<<"\n";
    }
 }