#include<iostream>
using namespace std;
int main()
{
    for(int i=1; i<=10; i++)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
    int i=1;
    while(i<=10)
    {
        cout<<i<<" ";
        i++;
    }
    cout<<"\n";
    int x=1;
    do
    {
        cout<<x<<" ";
        x++;
    }
    while(x<=10);
    return 0;
}
