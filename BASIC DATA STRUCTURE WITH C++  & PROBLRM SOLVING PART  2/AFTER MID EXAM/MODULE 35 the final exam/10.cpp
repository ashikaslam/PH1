#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int m;
    set<int> a;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        a.insert(x);
    }
    cin>>m;
    for(int i=0; i<m; i++)
    {
        int x;
        cin>>x;
        a.insert(x);
    }
    cout<<"the union set is\n";
    for(auto it=a.begin(); it!=a.end(); it++)cout<<*it<<" ";
}
