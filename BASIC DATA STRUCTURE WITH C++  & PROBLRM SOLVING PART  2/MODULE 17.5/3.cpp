#include<bits/stdc++.h>
using namespace std;
int fibb(int a);
int main()
{
    int n;
    cin>>n;
    cout<<fibb(n);
    return 0;
}
int fibb(int a)
{
    if(a<=1)return a;
    return fibb(a-1)+fibb(a-2);

}
