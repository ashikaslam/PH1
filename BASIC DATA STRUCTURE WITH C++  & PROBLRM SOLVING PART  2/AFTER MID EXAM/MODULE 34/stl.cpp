#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(1);///  logn
    s.insert(3);
    s.insert(3);
    s.insert(9);
    for(auto i:s)
        cout<<i<<" ";
    cout<<"\n";
    cout <<s.size()<<"\n";
    s.erase(9);//logn
    for(auto it=s.begin(); it!=s.end(); it++)cout<<*it<<" ";

    // ptint n size pabo 1 e
//find function works in logn
    if (s.find(9)!=s.end())
    {
        cout<<"yes";
    }
    else cout<<"no";

    return 0;
}
