#include<iostream>
#include<cstdio>
using namespace std;
int main()
 {
    int T, N;

    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        scanf("%d", &N);

        int h = 0, l = 0, prev = 0, cur = 0;
        scanf("%d", &prev);
        for (int i = 1; i < N; i++) {
            scanf("%d", &cur);
            if(cur > prev) h++;
            if(cur < prev) l++;
            prev = cur;
        }

        printf("Case %d: %d %d\n", t, h, l);
    }
    return 0;
}


/*int main()
{
    int T, n, i, Case=0, a[100], h=0, l=0, flag=0;

    scanf("%d", &T);

    while(T--)
    {
        Case++;
        scanf("%d", &n);
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }

        if(n==1)
        {
            flag=1;
        }
        else
        {
            a[n+1]=a[n];
            for(i=0; i<n; i++)
            {

                if(a[i]>a[i+1])
                {
                    l+=1;

                }
                else if(a[i]<a[i+1])
                {
                    h+=1;

                }
                else
                {
                    h=h+0;
                    l=l+0;
                }

            }
            flag=0;

        }
        if(flag==1)
        {
            printf("Case %d: 0 0\n", Case);
        }
        else
        {
            printf("Case %d: %d %d\n", Case, h, l-1);
                h=0;
                l=0;
        }
    }
    return 0;
}*/
