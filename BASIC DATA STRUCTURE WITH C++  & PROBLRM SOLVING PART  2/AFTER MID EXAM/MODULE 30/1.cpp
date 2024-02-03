 #include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int value;
    node* l;
    node* r;
};
class treee
{
public:
    node* root;
    treee()
    {
        root=NULL;
    }
    node* creat_node(int data)
    {
        node* newnode=new node;
        newnode->value=data;
        newnode->l=NULL;
        newnode->r=NULL;
        return newnode;
    }
    void insereT(int data)
    {
        node* newnode_a=creat_node(data);
        if(root==NULL)
        {
            root=newnode_a;
            return;
        }
        queue<node*>q;
        q.push(root);
        while(!q.empty())
        {
            node* head=q.front();
            q.pop();
            if(newnode_a->value>head->value)
            {
                if(head->r==NULL)
                {
                    head->r= newnode_a;
                    return;
                }
                else
                {
                    q.push(head->r) ;
                }
            }
            else if(newnode_a->value<=head->value)
            {
                if(head->l==NULL)
                {
                    head->l= newnode_a;
                    return;
                }
                else
                {
                    q.push(head->l) ;
                }
            }
        }
    }
    void prinT()
    {
        queue<node*>q;
        q.push(root);
        while(!q.empty())
        {

            node* head=q.front();
            q.pop();
            cout<<head->value<<" ";
            if(head->l!=NULL)
            {
                cout<<" l = "<<head->l->value<<" ";
            }
            if(head->r!=NULL)
            {
                cout<<" r = "<<head->r->value<<" ";
            }
            cout<<"\n";
            if(head->l!=NULL)
            {
                q.push(head->l) ;
            }
            if(head->r!=NULL)
            {
                q.push(head->r) ;
            }
        }
    }
    bool searcH(int num)
    {
        queue<node*>q;
        q.push(root);
        while(!q.empty())
        {
            if(num==q.front()->value)return true;
            node* head=q.front();
            q.pop();
            if(num<head->value)
            {
                if(head->l==NULL)return false;
                if(head->l->value==num)return true;
                else q.push(head->l);
            }
            else  if(num>head->value)
            {
                if(head->r==NULL)return false;
                if(head->r->value==num)return true;
                else q.push(head->r);
            }
        }
        return false;
    }
    void deleTe(int num)
    {
        queue<node*>q;
        q.push(root);
        while(!q.empty())
        {
            node* head=q.front();
            q.pop();
            if(num<head->value)
            {
                if(head->l==NULL)return ;
                if(head->l->value==num)
                {
                    if(head->l->l==NULL&&head->l->r==NULL)//no child
                    {
                        delete head->l;
                        head->l=NULL;
                        return;
                    }
                    if(head->l->l!=NULL&&head->l->r==NULL)//one left child
                    {
                        node* temp=head->l->l;
                        delete head->l;
                        head->l=temp;
                        return;
                    }
                    if(head->l->l==NULL&&head->l->r!=NULL)//one right child
                    {
                        node* temp=head->l->r;
                        delete head->l;
                        head->l=temp;
                        return;
                    }

                    if(head->l->l!=NULL&&head->l->r!=NULL)// has tow child
                    {
                        //now i have to find the in order successor
                        queue<node*>in_suxx;
                        in_suxx.push(head->l->l);
                        while(in_suxx.front()->l!=NULL)
                        {
                            node* now=q.front();
                            q.pop();
                            if(now->l!=NULL)in_suxx.push(now->l);
                        }
                        node* got_in_suxx=in_suxx.front();
                        swap(head->l,got_in_suxx);
                        deleTe(got_in_suxx->value);
                    }

                }
                else q.push(head->l);
            }
            else  if(num>head->value)
            {
                if(head->r==NULL)return ;
                if(head->r->value==num)
                {
                    if(head->r->l==NULL&&head->r->r==NULL)//no child
                    {
                        delete head->r;
                        head->r=NULL;
                        return;
                    }
                    if(head->r->l==NULL&&head->r->r!=NULL)//one right child
                    {
                        node* temp=head->r->r;
                        delete head->r;
                        head->r=temp;
                        return;
                    }
                    if(head->r->l!=NULL&&head->r->r==NULL)//one left child
                    {
                        node* temp=head->r->l;
                        delete head->r;
                        head->r=temp;
                        return;
                    }
                }
                else q.push(head->r);
            }
        }
        return;
    }
};
int main()
{
    treee n;
    n.insereT(100);
    n.insereT(200);
    n.insereT(90);
    n.insereT(95);
    n.insereT(60);
    n.insereT(40);
    n.insereT(65);

    n.deleTe(60);
    n.prinT();
    cout<<endl;

    //cout<<n.searcH(13);
    return 0;
}
