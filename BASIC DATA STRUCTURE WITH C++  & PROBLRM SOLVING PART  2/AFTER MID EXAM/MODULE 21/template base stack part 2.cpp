#include <bits/stdc++.h>
using namespace std;
template <class dataType>
class node
{
public:
    dataType data;
    node*nxt;
    node*prv;
};
template <class dataType>
class DoublyLinkedList
{
public:
    node<dataType>* head;
    int sz;
    DoublyLinkedList()
    {
        head=NULL;
        sz=0;
    }
    node<dataType>* CreateNewNode(dataType data)
    {
        node<dataType>* newnode =new node<dataType>;
        newnode->data=data;
        newnode->nxt=NULL;
        newnode->prv=NULL;
        return newnode;
    }
    void InsertAtHead(dataType data)
    {
        sz++;
        node<dataType>*newnode=CreateNewNode(data);
        if(head==NULL)
        {
            head= newnode;
            return;
        }
        node<dataType>*a=head;
        newnode->nxt=a;
        a->prv=newnode;
        head=newnode;
    }
    void delete_at_head()
    {
        if(head==NULL)return;
        node<dataType>* a=head;
        node<dataType>* b=head->nxt;
        delete a;
        if(b!=NULL)
        {
            b->prv=NULL;
        }
        head=b;
        sz--;
    }
    int getSize()
    {
        return sz;
    }

};
template <class dataType>
class Stack
{
    DoublyLinkedList<dataType> el;
    Stack()
    {

    }
    dataType top()
    {
        if(el.getSize()==0)
        {
            cout<<"empty";
            dataType a;

            return a;
        }
        return el.head->data;
    }
    void pushh(dataType val)
    {
        el.InsertAtHead(val);
    }
};
int main()
{

    return 0;
}
