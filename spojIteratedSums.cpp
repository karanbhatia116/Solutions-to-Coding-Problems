#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,sum=0;
	cin>>a>>b;
	while(a<=b)
	{
		sum = sum + a*a;
		a++;
	}
	cout<<sum;
	return 0;
}
