#include <iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>

using namespace std;

int change(int n)
{
    int a, b;

}
int main()
{
    int T, n, i, j, cnt=0, sum=0, Case=0;
    int a[105], b[105];

    scanf("%d", &T);


    while(T--)
    {
        Case++;

        scanf("%d", &n);

        for(i=0; i<n; i++)
        {
            scanf("%c", &a[i]);
        }
        for(j=0; j<n; j++)
        {
            scanf("%c", &b[j]);
        }

        for(i=0; i<n; i++)
        {
            if(a[i]>b[i])
            {
                cnt = (a[i]-b[i])-49;
                sum=sum+cnt;
            }
            else
            {
                cnt = (b[i]-a[i])-49;
                sum=sum+cnt;
            }
        }
        printf("Case %d: %d\n", Case, sum);
        cnt=0;
        sum=0;
    }
    return 0;



}


