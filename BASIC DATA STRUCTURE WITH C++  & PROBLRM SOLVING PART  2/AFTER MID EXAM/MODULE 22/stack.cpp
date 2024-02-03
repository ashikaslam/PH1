#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> a;
    a.push(10);
    a.push(20);
    a.pop();
    cout<<a.top()<<"\n";
    cout<<a.size();
    return 0;
}
