#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    long long int n, i, a[81];
    a[0]=1;
        a[1]=1;
        for(i=2; i<81; i++)
        {
            a[i] = a[i-2] + a[i-1];
        }
    while(scanf("%lld", &n)==1)
    {
        if(n==0)
        {
            return 0;
        }
        else
        {
            cout<<a[n]<<endl;
        }
    }
    return 0;
}

