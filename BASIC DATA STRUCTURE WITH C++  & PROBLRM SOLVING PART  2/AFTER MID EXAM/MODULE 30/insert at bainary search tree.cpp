#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int value;
    node* left;
    node* right;
    // node* parent; this is not so importent for implementing a bainary search tree.
};
class bainaryTree
{
public:
    node* root;
    bainaryTree()
    {
        root = NULL;
    }
    node* creat_newnode(int value)
    {
        node* newnode=new node;
        newnode->value=value;
        newnode->left=NULL;
        newnode->right=NULL;
        return newnode;
    }
    void bfsTreversa()
    {
        queue<node*> q;
        q.push(root);
        while(!q.empty())
        {
            node* a=q.front();
            int l=-1,r=-1;
            q.pop();
            if(a->left != NULL)
            {
                l=a->left->value;
                q.push(a->left);
            }
            if(a->right != NULL)
            {
                r=a->right->value;
                q.push(a->right);
            }
            cout<<"node "<<a->value<<" left = "<<l<<" right = "<<r<<endl;
        }
    }
    void insertt(int value)
    {
        node* a = creat_newnode(value);
        if(root==NULL)
        {
            root=a;
            return;
        }
        node* cur=root;
        node* prv=NULL;
        while(cur!=NULL)
        {
            if(a->value > cur->value)
            {
                prv=cur;
                cur=cur->right;
            }
            else
            {
                prv=cur;
                cur=cur->left;
            }
        }
        if(a->value > prv->value)
        {
            prv->right=a;
        }
        else
        {
            prv->left=a;
        }
    }
    bool searchh(int value)
    {
        node* cur=root;
        while(cur!=NULL)
        {
            if(value<cur->value)
            {
                cur=cur->left;
            }
            else if(value>cur->value)
            {
                cur=cur->right;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
    void Delete(int value)
    {
        node* cur = root;
        node* prv = NULL;

        while(cur != NULL)
        {
            if(value > cur->value)
            {
                prv = cur;
                cur = cur->right;
            }
            else if(value < cur->value)
            {
                prv = cur;
                cur = cur->left;
            }
            else
            {
                break;
            }
        }
        if(cur== NULL)
        {
            cout<<"Value is not present in BST\n";
            return;
        }
        //Case 1: both child is NULL
        if(cur->left == NULL &&cur->right==NULL)
        {
            if(prv->left!=NULL && prv->left->value== cur->value)
            {
                prv->left = NULL;
            }
            else
            {
                prv->right = NULL;
            }
            delete cur;
            return;
        }
        //Case 2: node has only one child
        if(cur->left==NULL && cur->right != NULL)
        {
            if(prv->left!=NULL &&prv->left->value== cur->value)
            {
                prv->left = cur->right;
            }
            else
            {
                prv->right = cur->right;;
            }
            delete cur;
            return;
        }
        if(cur->left!=NULL && cur->right == NULL)
        {
            if(prv->left!=NULL &&prv->left->value== cur->value)
            {
                prv->left = cur->left;
            }
            else
            {
                prv->right = cur->left;
            }
            delete cur;
            return;
        }
        //Case 3: node has two child
        node *tmp = cur->right;
        while(tmp->left!=NULL)
        {
            tmp = tmp->left;
        }
        int saved = tmp->value;
        Delete(saved);
        cur->value = saved;
    }
};
int main()
{
    bainaryTree n;
    n.insertt(10);
    n.insertt(50);
    n.insertt(58);
    n.Delete(58);
    n.bfsTreversa();
    return 0;
}
