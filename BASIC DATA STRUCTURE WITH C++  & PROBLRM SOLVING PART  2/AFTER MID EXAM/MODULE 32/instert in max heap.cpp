#include<bits/stdc++.h>
using namespace std;
class heap
{
public:
    vector<int> node;
    heap()
    {

    }
    void heapify(int indx)
    {
        while(indx>0 && node[indx]>node[(indx-1)/2])
        {
            swap(node[indx],node[(indx-1)/2]);
            indx=(indx-1)/2;

        }
    }
    void insertt(int data)
    {
        node.push_back(data);
        heapify(node.size()-1);
    }
    void the_tree()
    {
        for(int i=0; i<node.size(); i++)
        {
            if(i==0)
            {
                cout<<node[i]<<" is the root ";
                cout<<"its left is ";
                if(node.size()>(i*2)+1)
                {

                    cout<<node[(i*2)+1];
                }
                else
                {
                    cout<<"(it has no left)";
                }
                cout<<" and its right is ";
                if(node.size()>(i*2)+2)
                {
                    cout<<node[(i*2)+2];
                }
                else
                {
                    cout<<"(it has no right)";
                }
            }
            else
            {
                cout<<node[i];
                cout<<" its left is ";
                if(node.size()>(i*2)+1)
                {

                    cout<<node[(i*2)+1];
                }
                else
                {
                    cout<<"(it has no left)";
                }
                cout<<" and its right is ";
                if(node.size()>(i*2)+2)
                {
                    cout<<node[(i*2)+2];
                }
                else
                {
                    cout<<"(it has no right)";
                }

                cout<<" and its parent is ";
                cout<<node[(i-1)/2];
            }
            cout<<"\n";
        }
    }
    int  maxx()
    {
        return node[0];
    }
};
int main()
{
    heap  n;
    n.insertt(10);
    n.insertt(12);
    n.insertt(11);
    n.insertt(8);
    n.insertt(14);
    n.insertt(16);
    n.the_tree();
    return 0;
}
