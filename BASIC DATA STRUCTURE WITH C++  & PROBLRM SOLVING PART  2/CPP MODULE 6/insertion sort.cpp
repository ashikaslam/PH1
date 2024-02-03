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

    for(int i=1; i<n; i++)
    {
        int indx=i;
        while(indx>=1)
        {
            if(ar[indx-1]>ar[indx])
            {
                swap(ar[indx-1],ar[indx]);
                indx--;
            }
            else break;
        }
    }
    cout<<"after sort>>\n";
    for(int i=0; i<n; i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}
