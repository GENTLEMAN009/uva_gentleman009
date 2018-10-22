#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
    long int T, n, d, i;
    scanf("%ld", &T);
    while(T--)
    {
        scanf("%ld", &n);
        d = (((((n*567)/9)+7492)*235)/47)-498;
        d = abs(d);
        printf("%ld\n", (d/10)%10);

    }
    return 0;
}
