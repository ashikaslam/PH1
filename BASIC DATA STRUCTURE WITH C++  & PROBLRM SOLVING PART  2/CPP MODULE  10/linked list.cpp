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
    node* head;
    link_list()
    {
        head=NULL;
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
















//
//    int search_for_a_single_value(int num)
//    {
//        node* a1=head;
//        int index=0;
//        while(a1!=NULL)
//        {
//            if(a1->data==num)return index;
//            a1=a1->next;
//            index++;
//        }
//        return -1;
//    }
//    void search_for_all_possiblle_index(int num)
//    {
//        node* a1=head;
//        int index=0;
//        while(a1!=NULL)
//        {
//            if(a1->data==num)cout<<num<<" got at index "<<index<<"\n";
//            a1=a1->next;
//            index++;
//        }
//    }
};

















int main()
{
    link_list l;
    l.insertAthead(11);
    l.insertAthead(22);
    l.insertAthead(22);
    l.insertAthead(33);
    l.travers();
    //cout<<l.search_for_a_single_value(11);
   // l.search_for_all_possiblle_index(22);


    return 0;
}
