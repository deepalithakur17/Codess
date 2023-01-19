#include<iostream>
using namespace std;

void quick(int low, int high, int *arr)
{
    int arr1[high];
    int n=low,m=high-1;
    if(low>=high)
    {
        return;
    }
    for(int i=low+1;i<high;i++)
    {
        if(arr[i]<=arr[low])
        {
            arr1[n]=arr[i];
            n++;
    
        }
        else
        {
            arr1[m]=arr[i];
            m--;
        }
        
    }
    arr1[n]=arr[low];
    for(int i=low;i<high;i++)
    {
        arr[i]=arr1[i];
    }
    quick(low, n, arr);
    quick(n+1, high, arr);
}

int main()
{
    int n;
    cout<<"Enter number of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quick(0,n,arr);
    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
