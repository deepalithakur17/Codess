#include <iostream>
using namespace std;

void mergesort(int start, int mid, int end, int *arr)
{
	int arr1[(end-start)+1];
	int i = start, j = mid + 1, k = start;
	while (i <= mid && j <= end)
	{
		if (arr[i] > arr[j])
		{
			arr1[k] = arr[j];
			j++, k++;
		}
		else
		{
			arr1[k] = arr[i];
			i++, k++;
		}
	}

	while (i <= mid)
	{
		arr1[k] = arr[i];
		k++, i++;
	}

	while (j <= end)
	{
		arr1[k] = arr[j];
		j++, k++;
	}

	for (int i = start; i <=end; i++)
	{
		arr[i] = arr1[i];
	}
}

void merge(int start, int end, int *arr)
{
	int mid;
	if (start<end)
	{

		mid = (start + end) / 2;

		merge(start, mid, arr);
		merge(mid + 1, end, arr);

		mergesort(start, mid, end, arr);
	}
}

int main()
{
	cout<<"Enter the number of elements in an array : ";
	int n;
	cin>>n;
	int arr[n];
	cout<<"Enter elements : "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	merge(0, n-1, arr);
	cout<<"SOrted array is : ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}
