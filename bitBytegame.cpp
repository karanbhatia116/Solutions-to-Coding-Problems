#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int N,t=0,tbit=0,tnib=0,tbyt=0,bit=1,nib=0,byt=0;
    cin>>N;
   while(t<=N)
  {
    if(tbit == 3)
    {
        nib = bit + nib;
        bit = 0;
        tnib = 0;
    }
    if(tnib == 9)
    {
        byt = byt + nib;
        nib = 0;
        tbyt = 0;
    }
    if(tbyt == 17)
    {
        bit  = bit + 2*byt;
        byt = 0;
        tbit = 0;
    }
    t++;tbit++;tnib++;tbyt++;
}
cout<<bit<<" "<<nib<<" "<<byt<<endl;
}
}
