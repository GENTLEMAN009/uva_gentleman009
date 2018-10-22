#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int a, b, i, l, d=0;
    while(scanf("%d%d", &a, &b)==2)
    {
        if(a==0&&b==0)
        {
            return 0;
        }
        else
        {
            for(i=a; i<=b; i++)
            {
                l = sqrt(i);
                if(l*l==i)
                {
                    d++;
                }
            }
        }
        printf("%d\n", d);
        d=0;
    }
    return 0;

}

