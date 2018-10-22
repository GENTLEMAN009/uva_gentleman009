#include<stdio.h>
int GCD(int a, int b)
{
    if(a == 0)
    {
        return b;
    }
    else
    {
        GCD(b%a, a);
    }
}
int main()
{
    int N, i, j, G;
    while(scanf("%d", &N) == 1)
    {
        if(N== 0)
        {
            break;
        }
        else
        {
            G = 0;
            for(i=1; i<N; i++)
            {
                for(j=i+1;j<=N; j++)
                {
                    G+=GCD(i,j);
                }
            }
            printf("%d\n", G);
        }
    }
    return 0;
}
