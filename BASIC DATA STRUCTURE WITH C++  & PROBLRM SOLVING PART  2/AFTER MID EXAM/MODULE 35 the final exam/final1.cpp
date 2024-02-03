#include<bits/stdc++.h>
using namespace std;
bool compr(string a,string b) //function to compare to string
{
    int n1=a.size();
    int n2=b.size();
    int n;
    if(n1<n2)n=n1;
    else n=n2;
    for(int i=0; i<n; i++)
    {
        if(a[i]>b[i])return false;
        else if(a[i]<b[i]) return true;
    }
    if(n1<n2)return true;
    else return false;
}
vector<string> marge_sort(vector<string> a)// sort function
{
    if(a.size()<=1)return a;
    int mid =sizeof(a)/sizeof(string)/2;
    vector<string> b;
    vector<string> c;
    for(int i=0; i<mid; i++)b.push_back(a[i]);
    for(int i=mid; i<a.size(); i++)c.push_back(a[i]);
    vector<string> sorted_b=marge_sort(b) ;
    vector<string> sorted_c=marge_sort(c);
    vector<string> sorted_a;
    int idx1=0;
    int idx2=0;
    for(int i=0; i<sizeof(a)/sizeof(string); i++)
    {
        if(idx1==sorted_b.size())
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        else if(idx2==sorted_c.size())
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else if(compr(sorted_b[idx1],sorted_c[idx2])==1)
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else if(compr(sorted_b[idx1],sorted_c[idx2])==0)
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
    }
    return sorted_a;
}
int main(){

    int n;

    cin >> n;

    vector <string> a(n);

    for (int i = 0; i < n; i++){

        cin >> a[i];

    }

    vector <string> ans =marge_sort(a);

    for (int i = 0; i < ans.size(); i++){

        cout << ans[i] << " ";

    }



}
