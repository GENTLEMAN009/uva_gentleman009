#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
long int is_prime(long int n)
{
    int i, root;
    if(n<=1) return 0;
    else if(n == 2)
    {
        return 1;
    }
    if(n % 2 == 0)
    {
        return 0;
    }
    root = sqrt(n);
    for(i = 3; i <= root; i = i + 2)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    long long int T, cs=0, i, j, len, max;
    char str[10000];
    scanf("%lld", &T);

    while(T--)
    {
        long long int cnt[10000] = {0};
        scanf("%s", str);
        len = strlen(str);
        for(j=0; j<len; j++)
        {
            cnt[str[j]]++;
        }
        max=0;
        printf("Case %lld: ", ++cs);
        for(i=45; i<141; i++)
        {
            if(is_prime(cnt[i])==1)
            {
                printf("%c", i);
                max=1;
            }
        }
        if(max==0)
        {
            printf("empty");
        }
        printf("\n");
    }
    return 0;
}
