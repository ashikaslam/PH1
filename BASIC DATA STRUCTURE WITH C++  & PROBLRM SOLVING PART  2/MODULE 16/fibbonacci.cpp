#include<bits/stdc++.h>
using namespace std;
int called=0;
int fibb(int n)
{
    if(n<=1)return n;
    int x=fibb(n-1);
    called++;
    int y=fibb(n-2);
    called++;
    return x+y;
}
int main()
{
    int n;
    cin>>n;
    cout<<"\n";
    cout<<fibb(n);
    cout<<"\n"<<"called = "<<called;
    return 0;
}
