#include<bits/stdc++.h>
using namespace std;
class maxxHeap
{
public:
    vector<int> node;
    maxxHeap()
    {
    }
    void heapifY(int indx)
    {
        while(indx>0 && node[indx]> node[(indx-1)/2])
        {
            swap(node[indx],node[(indx-1)/2]);
            indx=(indx-1)/2;
        }
    }
    void insertt(int data)////////////// logn
    {
        node.push_back(data);
        heapifY(node.size()-1);
    }
    void maxx()////////////////// 1
    {
        cout<<node[0];
    }
    void deletet(int indx)//////////logn
    {
        if(indx>=node.size())return;
        swap(node[indx],node[node.size()-1]);
        node.pop_back();
        down_heapify(indx);
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
    int extract_maxx()
    {
        return node[0];
        deletet(0);
    }
};
int main()
{
    maxxHeap n;
    n.insertt(12);
    n.insertt(10);
    n.insertt(14);
    n.insertt(1);
    n.deletet(0);
    n.maxx();
    return 0;
}
