#include<bits/stdc++.h>
using namespace std;
vector<int> marge_(vector<int>a);
int main()
{
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    vector<int>b=marge_(a);
    for (int i=0; i<b.size(); i++)
    {
        cout<<b[i]<<"\n";
    }
    return 0;
}
vector<int> marge_(vector<int>a)
{
    if(a.size()<=1)return a;
    vector<int>b;
    vector<int>c;
    int mid=a.size()/2;
    for(int i=0; i<mid; i++)
    {
        b.push_back(a[i]);
    }
    for(int i=mid; i<a.size(); i++)
    {
        c.push_back(a[i]);
    }
    vector<int>sorted_a;
    vector<int>sorted_b=marge_(b);
    vector<int>sorted_c=marge_(c);
    int indxof_B=0;
    int indxof_C=0;
    for(int i=0; i<a.size(); i++)
    {
        if(indxof_B>=sorted_b.size())
        {
            sorted_a.push_back(sorted_c[indxof_C]);
            indxof_C++;
        }
        else if(indxof_C>=sorted_c.size())
        {
            sorted_a.push_back(sorted_b[indxof_B]);
            indxof_B++;
        }
        else if(sorted_c[indxof_C]>sorted_b[indxof_B])
        {
            sorted_a.push_back(sorted_b[indxof_B]);
            indxof_B++;
        }
        else
        {
            sorted_a.push_back(sorted_c[indxof_C]);
            indxof_C++;
        }
    }
    return sorted_a;
}
