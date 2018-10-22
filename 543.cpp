/******************** NILOY ****************/
#include<bits/stdc++.h>
#define lld long long int
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define f_input freopen("input.txt","r",stdin)
using namespace std;
vector<int> v;
int ar[1000002];
void Sieve(int n)
{
    int i, j;
    v.push_back(2);
    for(i=4; i<=1000000; i+=2) ar[i] = 1;
    for(i=3; i<=1000000; i+=2)
    {
        if(!ar[i])
        {
            v.push_back(i);
            for(j=i+i; j<=1000000; j+=i)
            {
                ar[j] = 1;
            }
        }
    }
    ar[0] = 1;
    ar[1] = 1;
    ar[2] = 1;
}



int main()
{
    int n;
    Sieve(n);
    while(scanf("%d", &n) ==1 && n)
    {

        int i = 1;
        int mx,a,b;
        int flag = 0;
        while(n>v[i])
        {
            mx = n - v[i];
            if(!ar[mx])
            {
                a = v[i];
                b = mx;
                flag = 1;
                break;
            }
            i++;
        }

        if(flag)
            printf("%d = %d + %d\n", n, a, b);
        else
            printf("Goldbach's conjecture is wrong.\n");

    }

    return 0;

}
