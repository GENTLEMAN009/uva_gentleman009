#include<bits/stdc++.h>
using namespace std;

long long bigmod(long long a, long long b, long long mod)
{
    if(b==0) return 1%mod;
    long long x = bigmod(a,b/2,mod);
    x = (x*x)%mod;
    if(b&1) x = (x*a)%mod;
    return x;
}

int main()
{
    long long int b, p, m, res;

    while(cin>>b>>p>>m)
    {
        res = bigmod(b, p, m);

        cout<<res<<endl;
    }
}
