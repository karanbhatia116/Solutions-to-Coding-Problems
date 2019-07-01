#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int N,U,D,counter=0;
	cin>>N>>U>>D;
	int a[N],i;
	for(i=0;i<N;i++)
	    cin>>a[i];
	bool usedParachute = false;
	i=0;
	while(i<N-1 && counter<=N)
	{
	    if(a[i+1]>a[i])
	    {
	        if(a[i+1]-a[i]<=U)
	        i++;
	    }
	    else
	    {
	        if(a[i]-a[i+1]<=D)
	        i++;
	        else if(!usedParachute && a[i]-a[i+1]>D)
	        i++;
	    }
	    counter++;
	}
	cout<<i+1<<endl;
	}
	return 0;
}

