
/*class node
{
public:
    int data;
    node* next;
    node* pre;

    node(int value)
    {
        data=value;
        next=NULL;
        pre=NULL;
    }
};
class stack_ok
{
public:
    node* head;
    node* top;
    int sz=0;
    stack_ok()
    {
        head=NULL;
        top=NULL;
    }
    void PUSH(int valueee)
    {
        sz++;
        node* newnode=new node(valueee);
        if(head==NULL)
        {
            head=top=newnode;
            return;
        }
        top->next=newnode;
        newnode->pre=top;
        top=newnode;
    }
    int top_ok()
    {
        return top->data;
    }
    void pop()
    {
        node* a=top;
        node*b=a->pre;
        top=b;
        b->next=NULL;
        delete a;
        sz--;
    }
    bool emptyy()
    {
        if(sz==0)return true;
        return false;
    }
    int sizE()
    {
        return sz;
    }

};
*/
#include<bits/stdc++.h>
#include "myst.h"
using namespace std;
int main()
{
    stack_ok st;
    st.PUSH(34);
    st.PUSH(44);
    st. pop();
    cout<<st.top_ok();
    return 0;
}
