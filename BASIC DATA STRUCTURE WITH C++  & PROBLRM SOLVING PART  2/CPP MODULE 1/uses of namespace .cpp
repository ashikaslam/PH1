#include<iostream>
using namespace std;
int x=5,y,z;
int fun(int a,int b)
{
    return a+b;
}
namespace info
{
int x=10;
}
int main()
{cout<<x<<" "<<info::x;
    return 0;
}
