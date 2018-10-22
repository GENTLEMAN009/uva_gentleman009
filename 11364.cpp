#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    int T, n,res, a[1000], i;

    cin>>T;
    while(T--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        res = (a[n-1] - a[0])*2;
        cout<<res<<endl;
    }
    return 0;
}
