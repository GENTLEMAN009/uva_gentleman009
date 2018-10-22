#include<stdio.h>
int main()
{
    int n, c, m;


    while(scanf("%d", &n) == 1)
    {
        m = n;
        c = n;
        while(n>=3)
        {
            c = c + (n/3);
            n = (n/3) + (n%3);
        }
        if(n == 2)
        {
            c++;
        }
        printf("%d\n", c - m);
    }
    return 0;
}
