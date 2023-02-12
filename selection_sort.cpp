#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter elements : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        int num=INT_MAX,a=0;
        for(int j=i;j<n;j++)
        {
            if(num>arr[j])
            {
                num=arr[j];
                a=j;
            }
        }
        swap(arr[i],arr[a]);
    }
    cout<<"Sorted array : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
