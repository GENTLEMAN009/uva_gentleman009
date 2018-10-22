#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T, s, d, a, b;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d%d", &s, &d);
        if(d>s || (s-d)%2==1)
        {
            printf("impossible\n");
        }
        else
        {
            a = (s+d)/2;
            b = s - a;
            printf("%d %d\n", a, b);
        }
    }
    return 0;
}
