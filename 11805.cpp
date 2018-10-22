#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    int T, n, k, p, cs=0, res;

    cin>>T;
    while(T--)
    {
        cin>>n>>k>>p;
        res = k+p;
        while(res>n)
        {
            res = res - n;
        }
        printf("Case %d: %d\n", ++cs, res);
    }
    return 0;
}
