#include<bits/stdc++.h>
using namespace std;
int main()
{
    ofstream of;
    of.open("1.txt");
    of<<"hello";
    int x;
    float y;
    ifstream ifs;
    ifs.open("0.txt");
    ifs>>x>>y;
    cout<<x<<" "<<y;
    of.close();
    ifs.close();
    return 0;
}
