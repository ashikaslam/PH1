#include<bits/stdc++.h>
using namespace std;
void print(list<int> l)//o(n)
{
    // list<int>::iterator a=l.begin();
    auto a=l.begin();
    while(a!=l.end())
    {
        cout<<*a<<" ";
        a++;
    }
}
void Insert(list<int>&l,int index,int value)
{
    auto it=l.begin();//1
    advance(it,index);//o(index)
    l.insert(it,value);//1
}
void Delete(list<int>&l,int index)
{
    auto it=l.begin();//1
    advance(it,index);//o(index)
    l.erase(it);//1
}
int main()
{
    list<int> l;
    l.push_front(2);//o(1)
    l.push_front(5);
    l.push_front(4);
    l.push_back(5);
    //l.pop_back();
    // l.pop_front();
    Insert(l,2,100);
    print(l);
    cout<<"\n";
    cout<<l.size();
    return 0;
}
