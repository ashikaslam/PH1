#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> num;
    num.push(3);
    num.push(33);
    num.push(30);
    //num.pop();
    while(num.empty()==false)
    {
        cout<<num.top()<<endl;
        num.pop();
    }
    return 0;
}
