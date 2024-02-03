#include<bits/stdc++.h>
using namespace std;
class queuee
{
public:
    int ar[100];
    int st;
    int las;
    queuee()
    {
        st=0;
        las=0;
    }
    void enq(int data)
    {
        ar[las]=data;
        las++;
    }
    void dq()
    {
        st++;
    }
    int frontt()
    {
        if(st<las)return ar[st];
        cout<<"empty !!";
        return -1;
    }
};
int main()
{
    queuee n;
    n.enq(5);
    n.enq(50);
    n.enq(500);
    n.dq();
    cout<<n.frontt();
    return 0;
}
