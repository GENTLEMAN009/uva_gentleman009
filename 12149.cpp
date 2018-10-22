#include<stdio.h>
int main()
{
    int n, i, s;

    while(scanf("%d", &n)==1)
    {
        if(n == 0)
        {
            break;
        }
        else
        {
            s = (n*(n+1)*(2*n+1))/6;
            printf("%d\n", s);
            s = 0;
        }
    }
}
