/******************** NILOY ****************/
#include<bits/stdc++.h>
#define lld long long int
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define f_input freopen("input.txt","r",stdin)
using namespace std;
int main()
{
    lld n,sum;
    while (cin>>n && n!=0)
    {
        if (n<10)
        {
            cout<<n<<endl;
        }

        if (n>9)
        {
            while (n>9)
            {
                sum=0;
                while (n>0 )
                {
                    sum=sum+(n%10);
                    n/=10;
                }
                n=sum;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
