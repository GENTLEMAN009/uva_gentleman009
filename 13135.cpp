/******************** NILOY ****************/
#include<bits/stdc++.h>
#define lld long long int
#define _I int
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define f_input freopen("input.txt","r",stdin)
using namespace std;
int main()
{
    map<_I, _I> a;
    _I i=0, s, n, t;
//    for (i = 0; ; i++)
//    {
//        s = (i+2)*(i+1)/2;
//        if (s > 50000000)
//        {
//            break;
//        }
//        a[s] = i;
//    }
    while(1)
    {
        s = (i+2)*(i+1)/2;
        if (s > 50000000)
        {
            break;
       }
        a[s] = i;
        i++;
    }
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        if (a.count(n))
        {
            printf("%d\n", a[n]);
        }

        else
        {
            printf("No solution\n");
        }

    }
    return 0;
}
