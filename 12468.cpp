#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a, b, m = 0, n = 100;
    while(scanf("%d%d", &a,&b)==2)
    {
        if(a == -1 && b ==-1)
        {
            return 0;
        }
        if(a<b)
        {
            if((b-a)<50)
            {
                printf("%d\n", (b-a)-m);
            }
            else
            {
                printf("%d\n", n-(b-a));
            }
        }
        else
        {
            if((a-b)>50)
            {
                printf("%d\n", (n+b)-a);
            }
            else
            {
                printf("%d\n", (a-b)-m);
            }
        }
    }
    return 0;
}
