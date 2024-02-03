#include<bits/stdc++.h>
using namespace std;
class maxxHeap
{
public:
    vector<int> node;
    maxxHeap()
    {
    }
    void maxx()////////////////// 1
    {
        cout<<node[0];
    }
    void down_heapify( int indx)
    {
        while(1)// it means the loop will continue for life time if we don't put aney breaking condition
        {
            int large=indx;
            int l=2*indx+1;
            int r=2*indx+2;
            if(l<node.size()&& node[large]<node[l])
            {
                large=l;
            }
            if(r<node.size()&& node[large]<node[r])
            {
                large=r;
            }
            if(indx==large)break;
            swap(node[indx],node[large]);
            indx=large;
        }
    }
    void heap_from_array(vector<int> a)
    {
        node=a;
        int n=node.size();
        int lnol=n/2-1;
        for(int i=lnol; i>=0; i--)
        {
            down_heapify( i);

        }
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
};
int main()
{
    vector<int> a= {1,2,3,4,10,9,8,7};
    maxxHeap n;
    n.heap_from_array(a);
    n.the_tree();
    return 0;
}
