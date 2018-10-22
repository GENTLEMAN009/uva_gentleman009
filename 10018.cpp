#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<algorithm>
using namespace std;
/*int rev(int n)
{
    int r=0;
    while (n != 0)
       {
          r = r * 10;
          r = r + n%10;
          n = n/10;
       }
       return r;
}

int pal(int p)
{
    int sum=0, m;
    m = rev(p);
    sum = m+p;

    if(sum==rev(sum))
    {
        printf("%d %d\n", Count, sum);
    }
    else
    {
        pal(sum);
    }

}

int main()
{
    int T, p, a, b;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &p);
        pal(p);

    }
    return 0;


}*/


//************************** NEW CODE

int main()
{
    long long  n,a,s,c;
    int t,i;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%lld",&n);
        a=n;
        c=0;
        while(1)
        {
            s=0;
        while(n!=0)
            {
                s=s*10+n%10;
                n/=10;
            }
        if(s==a)
        break;
        else
        {
        n=s+a;
        a=s+a;
        c++;
        }

        }
    printf("%lld %lld\n",c,a);
        }
    }

   return 0;
}
