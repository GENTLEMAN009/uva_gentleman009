#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    unsigned int a, b, res;

    while(scanf("%u%u", &a, &b)==2)
    {
       /* c = decimal_binary(a);
        d = decimal_binary(b);
        m = d - c;*/
        res = a^b;

        printf("%u\n", res);

    }
    return 0;

}
