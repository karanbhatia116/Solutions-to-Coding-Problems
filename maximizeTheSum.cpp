#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than or 
        // equal to pivot 
        if (arr[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(arr[i], arr[j]); 
        } 
    } 
    swap(arr[i + 1], arr[high]); 
    return (i + 1); 
} 
  
/* The main function that implements QuickSort 
 arr[] --> Array to be sorted, 
  low  --> Starting index, 
  high  --> Ending index */
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
           at right place */
        int pi = partition(arr, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 
int main()
{
    /*
      1 2 3 4 5 6 max sum = 9  1 6 2 5 3 4
      -1 4 2 5 6 2   max sum = 12 -1 6 2 5 2 4
      3 4 -5 2 1 8   -5 1 2 3 4 8
       max sum = 17   -5 8 4 1 3 2 
     */
    /* Logic pair 1st max and 1st min together 2nd max and 2nd min together and so on..*/
     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T;
    cin>>T;
    while(T--)
    {
         int N;
    cin>>N;
    int a[N];
    int i;
    for(i=0;i<N;i++)
    cin>>a[i];
    quickSort
    /*for(i=0;i<N;i++)
    cout<<a[i]<<" ";*/
    int sum = 0;
    for(i=0;i<N/2;i++)
    {
     sum = sum + abs(a[i] - a[N-i-1]);
    }
    cout<<sum<<"\n";
    } 
}


  
