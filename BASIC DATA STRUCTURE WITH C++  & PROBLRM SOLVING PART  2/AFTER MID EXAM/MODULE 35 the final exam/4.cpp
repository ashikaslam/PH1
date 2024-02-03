#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    stack<char> st;
    for(int i=0; i<a.size(); i++)
    {
        char now=a[i];
        if(now=='(' || now=='{' || now=='[')
        {
            st.push(now);
        }
        else
        {
            if(st.empty())
            {
                cout<<"No";
                return 0;
            }
            else if(now==')'&& st.top()=='(')
            {
                st.pop();
            }
            else if(now=='}'&& st.top()=='{')
            {
                st.pop();
            }
            else if(now==']'&& st.top()=='[')
            {
                st.pop();
            }
            else
            {
                cout<<"No";
                return 0;
            }
        }
    }
    if(st.empty())
    {
        cout<<"yes";

    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
