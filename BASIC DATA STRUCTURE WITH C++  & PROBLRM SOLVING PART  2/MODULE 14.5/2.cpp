#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node* pre;
    node* next;
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
    node* creat_new_node(int value)
    {
        node* new_node_x=new node;
        new_node_x->data=value;
        new_node_x->next=NULL;
        new_node_x->pre=NULL;
        return new_node_x;
    }
    void at_head(int dataa)
    {
        sz++;
        node*  nwnode=creat_new_node(dataa);
        if(head==NULL)
        {
            head=nwnode;
            return;
        }
        node* a=head;
        nwnode->next=a;
        a->pre=nwnode;
        head=nwnode;
    }
    void travers()
    {
        node* a=head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
        }
    }
    void pop()
    {
        if(sz==0)return;
        node* a=head;;
        for(int i=1; i<sz-1; i++)
        {
            a=a->next;
        }
        node* b=a->next;
        a->next=NULL;
        delete b;
        sz--;
    }

    void index_i(int i)
    {
        if(sz==0)return;
        node* a=head;
        for(int j=0; j<i; j++)
        {
            a=a->next;
        }
        cout<<a->data<<endl;
    }
    void chake(int el)
    {
        if(sz==0)
        {
            cout<<"enpty"<<"\n";
            return;
        }
        node* a=head;
        for(int i=0; i<sz-1; i++)
        {
            if(a->data==el)
            {
                cout<<"true"<<"\n";
                return;
            }
            a=a->next;
        }
        cout<<"false"<<"\n";
    }
    void reverse_lin()
    {
        if(sz==0)return;
        node*a=head;
        node* b=head;
        while(b->next!=NULL)
        {
            b=b->next;
        }
        for(int i=0; i<sz; i++)
        {
            swap(a->next,a->pre);
            a=a->pre;
        }
        head=b;
    }
    void in_a_spasific_index(int num,int index)
    {
        if(index==0)
        {
            at_head(num);
            return;
        }
        node* a=head;
        int pos=0;
        node* neew=creat_new_node(num);
        while(pos!=index-1)
        {
            a=a->next;
            pos++;
        }
        node* b=a->next;
        neew->pre=a;
        neew->next=b;
        b->pre=neew;
        a->next=neew;
    }
};
int main()
{
    link_list l;

    l.at_head(1);
    l.at_head(4);
    l.at_head(3);
    l.at_head(7);
    l.in_a_spasific_index(0,3);
    //  l. reverse_lin();
//    l .pop();
    l.travers();
//    printf("\n");
//    l.index_i(1);
//l.chake(9);
    return 0;
}
