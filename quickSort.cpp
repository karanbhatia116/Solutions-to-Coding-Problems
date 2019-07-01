#include<iostream>
using namespace std;
int Partition(int a[],int l, int r)
{
    int pivot,i,pIndex;
    pivot = a[r];
    pIndex = l;
    for(i=l;i<=r-1;i++)
    {
        if(a[i]<=pivot)
        {
            swap(a[i],a[pIndex]);
            pIndex++;
        }
    }
    swap(a[pIndex],a[r]);
    return pIndex;
}
void quickSort(int a[],int l, int r)
{
        if(l<r)
        {
            int pIndex;
    pIndex = Partition( a,l,r);
    quickSort(a,l,pIndex-1);
    quickSort(a,pIndex+1,r);}
}
int main()
{
    int a[]={6,5,4,3,2,1};
    quickSort(a,0,5);
    for(int i=0;i<6;i++)
        cout<<a[i]<<" ";
}
