#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int T, n, a[15], d, Case=0, i;
    scanf("%d", &T);
    while(T--)
    {
        Case++;
        scanf("%d", &n);
        d = n/2;
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
        sort(a,a+n);
        printf("Case %d: %d\n", Case, a[d]);
    }
    return 0;
}
