#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    string s;
    int tc;
    cin>>tc;
    getline(cin, s);
    while(tc--)
    {
        getline(cin, s);

        int sl=s.size();
        stack<char>stk;
        for(int i=0;i<sl;i++)
        {
            if(!stk.empty() && s[i]==')' && stk.top()=='(')
                stk.pop();
            else if(!stk.empty() && s[i]==']' && stk.top()=='[')
                stk.pop();
            else stk.push(s[i]);
        }
        if(stk.empty())
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }
    return 0;
}
