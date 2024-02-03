#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node* next;
    node* pre;
};
class link_list
{
public:
    node* head;
    int sz;
    link_list()
    {
        head=NULL;
        sz=0;
    }
    node* CreateNewNode(int value)
    {
        node* new_node=new node;
        new_node->data=value;
        new_node->pre=NULL;
        new_node->next=NULL;
        return new_node;
    }



 void InsertAtHead(int data)
        {
            sz++;
            node*newnode=CreateNewNode(data);
            if(head==NULL)
            {
                head= newnode;
                return;
            }
            node*a=head;
            newnode->next=a;
            a->pre=newnode;
            head=newnode;
        }

    void Traverse()
        {
            node*a=head;
            while(a!=NULL)
            {
                cout<<a->data<<" ";
                a=a->next;
            }
        cout<<"\n";
        }
};
int main()
{
    link_list l;
    l.InsertAtHead(5);
    l.InsertAtHead(9);
    l.InsertAtHead(7);

    l.Traverse();
    return 0;
}

