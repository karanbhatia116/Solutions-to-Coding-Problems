#include<iostream>
#include<string>
using namespace std;
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];     
    int i = (low - 1);   
  
    for (int j = low; j <= high- 1; j++) 
    {  
        if (arr[j] <= pivot) 
        { 
            i++;    
            swap(arr[i], arr[j]); 
        } 
    } 
    swap(arr[i + 1], arr[high]); 
    return (i + 1); 
} 
  

void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
     
        int pi = partition(arr, low, high); 
  
       
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,X;
    cin>>N>>X;
    int temp = X;
    //N = 6 X = 10
    string s;
    cin>>s;
    //RRLLLL
    int pos[X+N],i,j=0;
    for(i=0;i<N;i++)
    {
        if(s[i]=='L')
        pos[j++] = --X;
        else if(s[i]=='R')
        pos[j++] = ++X; 
    }
    quickSort(pos,0,j-1);
    for(i=0;i<j;i++)
    {
        if(pos[i]==pos[i-1])
        {
            int k;
            for(k=i-1;k<j-1;k++)
            {
                pos[k] = pos[k+1];
            }
            j--;
        }
    }
    int count = j+1;
    for(i=0;i<j;i++)
    {
        if(pos[i]==temp)
        count = count-1;
    }
    cout<<count<<endl;
   }
}