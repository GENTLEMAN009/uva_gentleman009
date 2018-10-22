#include<bits/stdc++.h>
#include<cstdio>
#define SIZE 100000
using namespace std;
int main()
{
    long long int n, a[SIZE], i, j, cnt;

    while(scanf("%lld", &n)==1)
    {
        for(i=0; i<n; i++)
        {
            scanf("%lld", &a[i]);
        }
        cnt=0;

        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[i]>a[j])
                {
                    cnt++;
                }
            }
        }
        printf("Minimum exchange operations : %lld\n", cnt);
    }
    return 0;
}
