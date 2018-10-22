#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
    int T, a, b, c, d;
    scanf("%d", &T);

    while(T--)
    {
        scanf("%d%d%d%d", &a, &b, &c, &d);

        if(a==b && b==c && c==d && d==a)
        {
            printf("square\n");
        }
        else if((a==c && b==d)||(a==b && c==d)||(a==d && b==c))
        {
            printf("rectangle\n");
        }
        else if((a<=(b+c+d)) && (b<=(a+c+d)) && (c<=(a+b+d)) && (d<=(a+b+c)))
        {
            printf("quadrangle\n");
        }
        else
        {
            printf("banana\n");
        }
    }
    return 0;
}
