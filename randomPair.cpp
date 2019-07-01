#include<iostream>
using namespace std;
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    int L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        int m = l+(r-l)/2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 
int main()
{
    ios::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--)
   {
       int N,totalPairs,max,i,j;
   cin>>N;
   totalPairs = N*(N-1)/2;
   //printf("%d\n\n",totalPairs);
   int a[N];
   for(i=0;i<N;i++)
   {
       cin>>a[i];
       //cout<<a[i];
   }
   //cout<<"\n\n";
   mergeSort(a,0,N-1);
   //for(i=0;i<N;i++)
   //cout<<a[i];
   //cout<<"\n\n";
   max = a[N-1]+a[N-2];
   i = 0,j = N-2;
   int count = 0;
//    while(times--)
//    {
//        while(i<j)
//    {
//        if(a[i]+a[j]==max && i!=prevI && j!=prevJ)
//        {
//          count+= 1;
//          prevI = i;
//          prevJ = j;
//        }
//    }
//    }
    //printf("%d\n\n",max);
    for(i=0;i<N;i++)
    {
        for(j=1;j<N;j++)
        {
            if(i<j)
            {
                if(a[i]+a[j]==max)
                count+=1;
            }
        }
    }
    //printf("%d\n\n",count);
    double p;
    p = count/(double)totalPairs;
    cout<<p<<"\n";
 }
}