#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&v1,int start,int mid, int end)
{
    vector<int>v;
    int i=start,j=mid+1;
    while(i<=mid && j<=end)
    {
        if(v1[i]<v1[j])
        {
            v.push_back(v1[i]);
            i++;
        }
        else
        {
            v.push_back(v1[j]); j++;
        }
    }
    while(i<=mid)
    {
        v.push_back(v1[i]); i++;
    }
    while(j<=end)
    {
        v.push_back(v1[j]); j++;
    }
    int m=0;
    for(int i=start;i<=end;i++)
    {
        v1[i]=v[m]; m++;
    }
    return;
    
}

void merge_sort(vector<int>&v1,int i,int end)
{
    if(i==end)
    {
        return;
    }
    int mid=(i+end)/2;
    merge_sort(v1,i,mid);
    merge_sort(v1,mid+1,end);
    merge(v1,i,mid,end);
}

int main()
{
    vector<int>v1={5,10,4,2,90,80,79};
    merge_sort(v1,0,6);
    for(auto it:v1)
    {
        cout<<it<<" ";
    }
}
