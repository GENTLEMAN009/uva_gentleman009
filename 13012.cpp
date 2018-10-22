#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t, a[100], i, cnt=0;

    while(scanf("%d", &t)==1)
    {
        for(i=0; i<5; i++)
        {
            scanf("%d", &a[i]);
            if(t==a[i])
            {
                cnt++;
            }
        }
        printf("%d\n", cnt);
        cnt=0;
    }
    return 0;
}
