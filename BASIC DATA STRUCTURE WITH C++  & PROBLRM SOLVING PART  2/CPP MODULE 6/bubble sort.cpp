#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    for(int i=0; i<n; i++)
    {
        bool ok=true;
        for(int j=0; j<n-1-i; j++)
        {
            if(ar[j+1]<ar[j])
            {
                swap(ar[j+1],ar[j]);
                ok=false;
            }

        }
        if(ok)
        {
            break;
        }
        cout<<"after pass "<<i<<"\n";
        for(int i=0; i<n; i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<"\n";
    }
    cout<<"after sorting>>\n";
    for(int i=0; i<n; i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}
/*
complexity:
i) time
ii)space
time>>
outside loop n times
inside loop >> n-1,n-2,n-3,n-4=(n-1)*n/2
*/
