#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int T, Case=0, a[5], i;
    scanf("%d", &T);
    while(T--)
    {
        Case++;
        for(i=0; i<3; i++)
        {
            scanf("%d", &a[i]);
        }
        sort(a,a+3);
        printf("Case %d: %d\n", Case, a[1]);
    }
    return 0;
}
