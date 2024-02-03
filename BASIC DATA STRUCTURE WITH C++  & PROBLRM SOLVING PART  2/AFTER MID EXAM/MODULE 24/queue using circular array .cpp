#include<bits/stdc++.h>
using namespace std;
class que
{
public:
    int *ar;
    int l;
    int r;
    int sz;
    int cap;
    /*
    circular array  te size er formula :if r>l then sz=r-l+1

                                        if r<l then sz=maxsize-l+r+1
    */
    que()
    {
        l=0;
        r=-1;
        sz=0;
        cap=1;
        ar=new int[cap];
    }
    void increaseSize()
    {
        removeecircular();
        int* temp=new int[cap*2];
        for(int i=0; i<cap; i++)
        {
            temp[i]=ar[i];
        }
        swap(temp,ar);
        delete []temp;
    }
    void removeecircular()
    {
        if(l>r)
        {
            int* temp=new int[cap];
            int indx=0;
            for(int i=l; i<cap; i++)
            {
                temp[indx]=ar[i];
                indx++;
            }
            for(int i=0; i<=r; i++)
            {
                temp[indx]=ar[i];
                indx++;
            }
            swap(ar,temp);
            delete []temp;
            l=0;
            r=cap-1;
        }
    }
    int top()
    {
        if(sz==0)return -1;
        return ar[l];
    }
    void pop()
    {
        if(sz==0)return;
        l++;
        if(l==cap)
            l=0;
        sz--;
    }
    void push(int data)
    {
        if(sz==cap)increaseSize();
        r++;
        if(r==cap)
            r=0;
        ar[r]=data;
        sz++;
    }
    int getsz()
    {
        return sz;
    }
};
int main()
{
    que a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(7);
    a.pop();
    a.pop();
    a.pop();
    a.pop();
    a.pop();
    a.push(9);
    cout<<a.top();
}
