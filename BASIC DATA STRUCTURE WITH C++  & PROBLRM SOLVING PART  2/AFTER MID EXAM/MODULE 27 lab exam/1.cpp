#include<bits/stdc++.h>
using namespace std;
class queuee
{
public:
    int* a;
    int r;
    int l;
    int sz;
    int cap;
    queuee()
    {
        a=new int[1];
        r=-1;
        l=0;
        sz=0;
        cap=1;
    }
    void remove_cir()
    {
        if(l>r)
        {
            int id=0;
            int *temp=new int[cap];
            for(int i=l; i<cap; i++)
            {
                temp[id]=a[i];
                id++;
            }
            for(int i=0; i<=r; i++)
            {
                temp[id]=a[i];
                id++;
            }
            swap(a,temp);
            l=0;
            r=0;
            delete temp;
        }
    }
    void increase_size()
    {
        remove_cir();
        int *temp=new int[cap*2];
        for(int i=0; i<cap*2; i++)
        {
            temp[i]=a[i];
        }
        swap(a,temp);
        cap=cap*2;
        delete temp;
    }
    void enqueue(int data)
    {
        if(sz==cap)
        {
            increase_size();
        }
        r++;
        if(r==cap)r=0;
        a[r]=data;
        sz++;
    }
    void dequee()
    {
        if(sz==0)
        {
            cout<<"empty";
            return;
        }
        l++;
        if(l==cap)l=0;
        sz--;
    }
    int froont()
    {
        if(sz==0)
        {
            cout<<"empty";
            return -1;
        }
        return a[l];
    }
    int getSize()
    {
        return sz;
    }
};
int main()
{
    queuee x;
    x.enqueue(6);
    x.enqueue(6);
    x.enqueue(6);
    x.enqueue(6);
    x.enqueue(6);
    x.dequee();
    x.enqueue(6);
    x.enqueue(6);
    cout<<x.froont();
    cout<<x.getSize();
    return 0;
}
