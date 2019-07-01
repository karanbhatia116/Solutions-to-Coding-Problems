 
/*
       . . . 
       . . .
       . . . 
       
       . . . . 
       . . . . 
       . . . . 
       . . . . 

       No  L
       4 - 1
       
       9 - 1
       4 - 2
       1 - 3

       1^2 + 2^2 + 3^2 Total number of squares

       General for NxN = 1^2 + 2^2 + 3^2 + .... + N^2;
       
       if N is odd total number of odd length squares  = 1^2 + 3^2 + 5^2 + 7^2 + ....+(N-2)^2 + N^2
       
       N
       E (2k-1)^2 = 4k^2 - 4k + 1
    k = 1

     = 4* N(N+1)(2N+1)/6 - 4*N(N+1)/2 + N
     = 2/3* N(N+1)(2N+1) - 2*N(N+1) + N
     */
    #include<iostream>
    using namespace std;
    int main()
    {
        ios::sync_with_stdio(false);
        int N;
        cin>>N;
        long long numberOfSquares = 0;
        int i;
        if(N%2!=0)
        {
            for(i=1;i<=N;i++)
        {
            cout<<"i = "<<i<<"\n";
           numberOfSquares = numberOfSquares + (2*i - 1)*(2*i-1);
        }
        }
        cout<<numberOfSquares<<"\n";
    }