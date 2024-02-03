#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int id;
    node* left;
    node* right;
    node* parent;
};
class bainaryTree
{
public:
    node* root;
    bainaryTree()
    {
        root=NULL;
    }
    node* creat_new_nosde(int id)
    {
        node* newnode=new node;
        newnode->id=id;
        newnode->left=NULL;
        newnode->right=NULL;
        newnode->parent=NULL;
        return newnode;
    }
    bool searchAData(int x)
    {
        queue<node*> q;
        q.push(root);
        while(!q.empty())
        {
            node* a=q.front();
            q.pop();
            if(a->parent == NULL)
            {
                if(a->id==x)
                {
                    return true;
                }
            }
            if(a->left != NULL)
            {
                if(a->left->id==x)
                {
                    return true;
                }
                q.push(a->left);
            }

            if(a->right != NULL)
            {
                if(a->right->id==x)
                {
                    return true;
                }
                q.push(a->right);
            }
        }
        return false;
    }
    void insertion(int data)
    {
        node* newn =creat_new_nosde(data);
        if(root ==NULL)
        {
            root=newn;
            return;
        }
        queue<node*> q;
        q.push(root);
        while(!q.empty())
        {
            node* a=q.front();
            q.pop();
            if(a->left != NULL)
            {
                q.push(a->left);
            }
            else
            {
                a->left=newn;
                newn->parent=a;
                return;
            }
            if(a->right != NULL)
            {
                q.push(a->right);
            }
            else
            {
                a->right=newn;
                newn->parent=a;
                return;
            }
        }
    }
};
int main()
{
    bainaryTree n;
    n.insertion(0);
    n.insertion(1);
    n.insertion(2);
    n.insertion(23);
    n.insertion(42);
    n.insertion(62);
    cout<< n.searchAData(0);
    return 0;
}
