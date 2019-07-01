#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long double a,b,c;
    cin>>a>>b>>c;
    long double d;
    d = b*b - 4*a*c;
    long double D = sqrt(d);
    long double x1,x2;
    x1 = (-b + D)/(2*a);
    x2 = (-b-D)/(2*a);
    cout<<x1<<endl;
    cout<<x2<<endl;
}
