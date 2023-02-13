#include <iostream>
#include <algorithm>
using namespace std;

int bin_search(int *arr, int num, int start, int end)
{
    int mid = (start + end) / 2;
    if (arr[mid] == num)
    {
        return mid;
    }
    if (start >= end)
    {
        cout << "Element is not present in array" << endl;
        return -1;
    }

    if (arr[mid] > num)
    {
        bin_search(arr, num, 0, mid);
    }
    else
    {
        bin_search(arr, num, mid+1 , end);
    }
}

int main()
{
    int num;
    cout<<"Enter the number of elements :";
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr + num);
    cout<<"The elements of array in sorted order are "<<endl;
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter the element you want to search :";
    int n;
    cin >> n;
    int m = bin_search(arr, n, 0, num-1);
    if (m>-1)
    {
        cout << "Element is present at index " <<m;
    }
}
