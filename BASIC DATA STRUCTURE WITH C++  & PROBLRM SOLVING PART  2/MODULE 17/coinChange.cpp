#include<bits/stdc++.h>
using namespace std;
vector<int>a= {1,3,4,2};
int called=0;
int coin_c(int n)
{
    if(n==0)return 0;
    int ans=1000;
    for(int i=0; i<a.size(); i++)
    {
        if(n>=a[i])
        {
            called++;

            ans=min(ans,1+coin_c(n-a[i]));
        }
    }
    return ans;
}
int main()
{
    cout<<coin_c(15)<<"\n";
    cout<<"the loop moved "<<called<<" times";


    return 0;
}
