#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int main()
{
    int a[1000], i, sum, avg, ans, n, cs=1;

    while(scanf("%d", &n)==1 && n!=0)
    {
            //cs++;
            sum = 0;
            ans = 0;
            for(i=0; i<n; i++)
            {
                scanf("%d", &a[i]);
            }
            for(i=0; i<n; i++)
            {
                sum+=a[i];
            }
            avg = sum/n;

            for(i=0; i<n; i++)
            {
                if(a[i]>avg)
                {
                    ans += (a[i]-avg);
                }
            }
            printf("Set #%d\nThe minimum number of moves is %d.\n\n", cs, ans);
            cs++;

    }

    return 0;
}

