#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int T, n, i, a[10000], k, Case = 0;
    scanf("%d", &T);

    while(T--)
    {
        scanf("%d", &n);
        k = n;
        Case++;
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
        sort(a,a+n);
        for(i=k; i>0; i--)
        {
            if(i == k)
            {
                printf("Case %d: %d\n", Case, a[i-1]);
            }
            else
            {
                continue;
            }
        }
    }
}
