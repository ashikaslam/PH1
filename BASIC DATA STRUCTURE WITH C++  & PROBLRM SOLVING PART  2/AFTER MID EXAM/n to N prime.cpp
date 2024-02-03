#include<bits/stdc++.h>
using namespace std;
int main()
{
    int st=1;
    int en=100;
    for(int i=st; i<=en; i++)
    {
        int flag=0;
        for(int j=2; j<i; j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0 && i!=1)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
