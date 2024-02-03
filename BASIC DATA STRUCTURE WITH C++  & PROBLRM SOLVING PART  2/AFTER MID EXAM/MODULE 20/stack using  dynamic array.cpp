#include<bits/stdc++.h>
using namespace std;
const int n=500;
class stacK
{
public:

    int* a;
    int cap;
    int stack_size;
    stacK()
    {
        a=new int[1];
        cap=1;
        stack_size=0;
    }
// add an element in the stack o(1);
    void pushh(int val)
    {
        if(stack_size+1>n)
        {
            increase_size();
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
    int  top()
    {
        if(stack_size==0)
        {
            cout<<"empty"<<"\n";
            return -1;
        }
        return a[stack_size-1];
    }
    //make the cpacity multiplied by 2 o(1);
    void increase_size()
    {
        int* temp;
        temp=new int[cap*2];
        for(int i=0; i<cap; i++)
        {
            temp[i]=a[i];
        }
        swap(a,temp);
        delete []temp;
        cap=cap*2;
    }
};
int main()
{
    stacK l;
    l.pushh(2); l.pushh(7);
    cout<<l.top();
    return 0;
}

