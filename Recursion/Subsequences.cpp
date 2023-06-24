#include <bits/stdc++.h>
using namespace std;

void solve(int i, vector<int> v1, vector<vector<int>> &v, int n,vector<int>v2)
{
    if (i >= n)
    {
        // v.push_back(v2);
        return;
    }
    v2.push_back(v1[i]);
    v.push_back(v2);
    solve(i + 1, v1, v, n,v2);
    v2.pop_back();
    solve(i + 1, v1, v, n,v2);
}

int main()
{
    
    int n; cout<<"Enter the number of elements : ";
    cin>>n;
    vector<int> v1(n);
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    vector<vector<int>> v;
    vector<int >v2;
    solve(0, v1, v, v1.size(),v2);
    for(auto it:v)
    {
        for(auto i:it)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}
