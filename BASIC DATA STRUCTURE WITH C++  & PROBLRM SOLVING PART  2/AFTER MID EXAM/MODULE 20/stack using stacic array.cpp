#include<bits/stdc++.h>
using namespace std;
 const int n=500;
class stacK
{
public:

    int a[n];
    int stack_size;
    stacK()
    {
        stack_size=0;
    }
// add an element in the stack o(1);
    void pushh(int val)
    {
        if(stack_size+1>n)
        {
            cout<<"stack full"<<"\n";
            return;
        }
        stack_size=stack_size+1;
        a[stack_size-1]=val;
    }
    //delete the topmost element of stack o(1)
    void pop()
    {
        if(stack_size==0)
        {
            cout<<"empty"<<"\n";
            return;
        }
        a[stack_size-1]=0;
        stack_size=stack_size-1;
    }
    // return the topmost element of stack o(1)
    int  top(){
    if(stack_size==0)
        {
            cout<<"empty"<<"\n";
            return -1;
        }
    return a[stack_size-1];
    }
};
int main()
{stacK l;
l.pushh(2);
cout<<l.top();
    return 0;
}
