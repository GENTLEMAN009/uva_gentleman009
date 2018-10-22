#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int gcd(int a, int b)
{
    if(a%b == 0)
    {
        return b;
    }
    else
    {
        return gcd(b, a%b);
    }
}

int main()
{
    string s;
    int n, i, j, maX, cmp;
    int num ;
    cin>>n;
    getchar();
    while(n--)
    {
        getline(cin, s);
        int len = s.size();

        stringstream ss(s);
        vector<int> v;
        while(ss>>num) v.push_back(num);
        //cout<<num;
        maX = 0;
        int k = v.size();
        for(i=0; i<k; i++)
        {
            for(j=i+1; j<k; j++)
            {
                cmp = gcd(v[i], v[j]);
                maX = max(maX, cmp);
            }
        }
        cout<<maX<<endl;
    }
}
