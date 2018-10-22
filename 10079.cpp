#include<bits/stdc++.h>
#include<cstdio>
#define SIZE 1000
#define Pi 2*acos(0.0)
using namespace std;
int main()
{
    long long int n, A;

    while(scanf("%lld", &n)==1)
    {
        if(n<0)
        {
            return 0;
        }
        else
        {
            A = ((n*(n+1))/2)+1;
            printf("%lld\n", A);
        }
    }
    return 0;
}
