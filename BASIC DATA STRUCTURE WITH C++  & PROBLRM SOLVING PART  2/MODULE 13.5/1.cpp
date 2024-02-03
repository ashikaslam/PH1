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
    node* creatnewnode(int value)
    {
        node* new_node=new node;
        new_node->data=value;
        new_node->next=NULL;
        return new_node;
    }
    void insertat_head(int newvlue)
    {
        node* a=creatnewnode(newvlue);
        if(head==NULL)
        {
            head=a;
            return ;
        }
        a->next=head;
        head=a;
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
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        l.insertat_head(x);
    }

    int nw;
    cout<<"new el>>";
    cin>>nw;
     l.insertat_head(nw);
  l.reverse_print();



    return 0;
}
