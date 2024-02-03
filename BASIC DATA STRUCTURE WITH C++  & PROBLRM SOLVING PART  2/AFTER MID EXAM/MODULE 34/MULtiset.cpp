#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> a;
    a.insert(2);//logn
    a.insert(2);
    a.insert(3);
    a.insert(2);
    //a.erase(2);
    a.erase(a.find(2));
    for( auto i:a)cout<<i<<" " ;

    return 0;
}
