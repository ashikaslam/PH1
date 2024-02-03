#include<bits/stdc++.h>
using namespace std;
int fac(int n);
int main()
{
    int n=5;
    cout<<fac(n);
    return 0;
}
int fac(int n)
{
    if(n==0)return 1;
    return fac(n-1)*n;
}
