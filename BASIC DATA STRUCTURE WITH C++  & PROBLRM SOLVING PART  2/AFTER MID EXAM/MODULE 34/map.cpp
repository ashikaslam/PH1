#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> a;
//insert logn
    a["goru"]=1;
    a["chagol"]=2;
    a["gora"]=3;
    // cout<<a["goru"];//key must be different but the value.
   // print the whole map   O(n)
    for(auto it:a)
    {

        cout<<"key :  "<<it.first<<" value :"<<it.second<<"\n";


    }



    return 0;
}
