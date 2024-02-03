#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node* next;
};
class link_list
{
public:
    int sz;
    node* head;
    link_list()
    {
        head=NULL;
        sz=0;
    }
    node* creat_new_node(int vlue)
    {
        node* newnode=new node;
        newnode->data=vlue;
        newnode->next=NULL;
        return newnode;
    }
    void insertAthead(int valu)
    {
        sz++;
        node* a =creat_new_node(valu);
        if(head==NULL)
        {
            head=a;
            return ;
        }
        a->next=head;
        head=a;
    }
    void travers()
    {
        node* a1=head;
        while(a1!=NULL)
        {
            cout<<a1->data<<" ";
            a1=a1->next;
        }
    }
    int search_for_a_single_value(int num)
    {
        node* a1=head;
        int index=0;
        while(a1!=NULL)
        {
            if(a1->data==num)return index;
            a1=a1->next;
            index++;
        }
        return -1;
    }
    void search_for_all_possiblle_index(int num)
    {
        node* a1=head;
        int index=0;
        while(a1!=NULL)
        {
            if(a1->data==num)cout<<num<<" got at index "<<index<<"\n";
            a1=a1->next;
            index++;
        }
    }
    //the function*********************
    void insert_at_any_indx(int indx,int data)
    {
        if(indx<0 ||indx>sz)return;
        if(indx==0)
        {
            insertAthead(data);
            return;
        }
        sz++;
        node* a=head;
        int current_index=0;
        while(current_index!=indx-1)
        {
            a=a->next;
            current_index++;
        }
        node* newnode=creat_new_node(data);
        newnode->next=a->next;
        a->next=newnode;
    }
    void delete_at_head()
    {
        if(head==NULL)return;
        node* a=head;
        head=a->next;
        delete a;
        sz--;
    }

    int get_sizeOf_linklist1()
    {
        return sz;
    }
    void insertAftervalue(int indnum,int insdata)
    {
        node* a=head;
        while(a!=NULL)
        {
            if(a->data==indnum)  break;
            a=a->next;
        }
        if(a==NULL)
        {
            cout<<"not data"<<"\n";
            return;
        }
        node* b =creat_new_node(insdata);
        b->next=a->next;
        a->next=b;
        sz++;
    }
    void reverse_print2(node* a)
    {
        if(a==NULL)return;
        reverse_print2(a->next);
        cout<<a->data<<" ";
    }
    void reverse_print()
        {
            reverse_print2(head);
            cout<<"\n";
        }
};
int main()
{
    link_list l;
    l.insertAthead(11);
    l.insertAthead(22);
    l.insertAthead(22);
    l.insertAthead(33);
    //l.insert_at_any_indx(2,399);
    //l. delete_at_head();
  //  l.insertAftervalue(22,100);
    // l.travers();
    //cout<<l.search_for_a_single_value(11);
    //l.search_for_all_possiblle_index(22);
    l.reverse_print();
    return 0;
}

