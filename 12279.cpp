#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[1010], i, cnt_1, cnt_2, cs=0;

    while(scanf("%d", &n) == 1)
    {
        if(n==0)
        {
            return 0;
        }
        else
        {
            cnt_1=0;
        cnt_2=0;
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }

        for(i=0; i<n; i++)
        {
            if(a[i]>=1 && a[i]<=99)
            {
                cnt_1++;
            }
            else if(a[i] == 0)
            {
                cnt_2++;
            }
        }
        printf("Case %d: %d\n", ++cs, cnt_1 - cnt_2);
        }

    }
    return 0;
}
