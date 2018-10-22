#include<iostream>
#include<cstdio>
using namespace std;
int f91(int n)
{
    if(n>=101)
    {
        return n-10;
    }
    else
    {
        return (f91(f91(n+11)));
    }
}
int main()
{
    int n, p;
    while(scanf("%d", &n))
    {
        if(n==0)
        {
            return 0;
        }
        else
        {
            p = f91(n);
            printf("f91(%d) = %d\n", n, p);
        }
    }
}
