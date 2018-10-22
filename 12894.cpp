#include<bits/stdc++.h>
#include<cmath>
#include<cstdio>

using namespace std;
int main()
{
    unsigned T, x,y,x1,y1,cx,cy,r;
    unsigned len, wid;
    cin>>T;

    while(T--)
    {
        cin>>x>>y>>x1>>y1>>cx>>cy>>r;
        len = x1-x;
        wid=y1-y;
        if((5*wid == 3*len) && (len == 5*r) && 20*(cx-x) == 9*len && 2*(cy-y) == wid)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

