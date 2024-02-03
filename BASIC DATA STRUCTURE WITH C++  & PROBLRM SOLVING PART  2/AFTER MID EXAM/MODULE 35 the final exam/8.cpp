#include<bits/stdc++.h>
using namespace std;
class maxxHeap
{
public:
    vector<int> node;
    maxxHeap()
    {
    }
    void inserttt(int data)
    {
        node.push_back(data);
        int indx=node.size()-1;
        while(indx>0 && node[indx]> node[(indx-1)/2])
        {
            swap(node[indx],node[(indx-1)/2]);
            indx=(indx-1)/2;
        }
    }
    void deletet(int indx)
    {
        if(indx>=node.size())return;
        swap(node[indx],node[node.size()-1]);
        node.pop_back();
        while(1)
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
    int maxx()
    {
        return node[0];
    }
    void printt()
    {
        for(int i=0; i<node.size(); i++)
            cout<<(-1)*node[i]<<" ";
    }
};
class minheap
{
public:
    maxxHeap n;
    void insertt(int x)
    {
        n.inserttt(-x);
    }
    int minn()
    {
        return -n.maxx();
    }
    void deletee(int indx)
    {
        n.deletet(indx);
    }
    void tarvas()
    {
        n.printt();
    }
};
int main()
{
    minheap n;
    n.insertt(10);
    n.insertt(9);
    n.insertt(9);
    n.insertt(1);
    n.insertt(7);
    n.insertt(8);
    n.insertt(7);
    //cout<<n.minn();
    n.tarvas();
    return 0;
}
