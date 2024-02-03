#include<bits/stdc++.h>
using namespace std;
vector<int> marge_sort(vector<int>a)
{
    if(a.size()<=1)
    {
        return a;
    }
    int mid=a.size()/2;
    vector<int>b;
    vector<int>c;
    for(int i=0; i<mid; i++)
    {
        b.push_back(a[i]);
    }
    for(int i=mid; i<a.size(); i++)
    {
        c.push_back(a[i]);
    }
    vector<int>sb= marge_sort(b);
    vector<int>sc= marge_sort(c);
    vector<int>sa;
    int ib=0;
    int ic=0;
    for(int i=0; i<a.size(); i++)
    {
        if(ib>sb.size()-1)
        {
            sa.push_back(sc[ic]);
            ic++;
        }
        else if(ic>sc.size()-1)
        {
            sa.push_back(sb[ib]);
            ib++;
        }
        else if(sb[ib]<sc[ic])
        {
            sa.push_back(sb[ib]);
            ib++;
        }
        else
        {
            sa.push_back(sc[ic]);
            ic++;
        }
    }
    return sa;
}
int factorial(int n)
{
if(n == 0 || n == 1) return 1;
return n * factorial(n-1);

}
int main()
{cout<<factorial(5);
   return 0;
}
