#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n, max=0, m[1000], T, Case=0;
    char a[1000], b[1000], c[1000], d[1000], e[1000], f[1000], g[1000], h[1000], i[1000], j[1000];

    scanf("%d", &T);

    while(T--)
    {
        Case++;
        scanf("%s%d", a, &m[0]);
        scanf("%s%d", b, &m[1]);
        scanf("%s%d", c, &m[2]);
        scanf("%s%d", d, &m[3]);
        scanf("%s%d", e, &m[4]);
        scanf("%s%d", f, &m[5]);
        scanf("%s%d", g, &m[6]);
        scanf("%s%d", h, &m[7]);
        scanf("%s%d", i, &m[8]);
        scanf("%s%d", j, &m[9]);

        for(n=0; n<10; n++)
        {
            if(m[n]>max)
            {
                max=m[n];
            }
        }
        printf("Case #%d:\n", Case);
        for(n=0; n<10; n++)
        {
            if(m[n]==max)
            {
                if(n==0)
                {
                    puts(a);
                }
                if(n==1)
                {
                    puts(b);
                }
                if(n==2)
                {
                    puts(c);
                }
                if(n==3)
                {
                    puts(d);
                }
                if(n==4)
                {
                    puts(e);
                }
                if(n==5)
                {
                    puts(f);
                }
                if(n==6)
                {
                    puts(g);
                }
                if(n==7)
                {
                    puts(h);
                }
                if(n==8)
                {
                    puts(i);
                }
                if(n==9)
                {
                    puts(j);
                }
            }
        }
        max=0;
    }
    return 0;
}

