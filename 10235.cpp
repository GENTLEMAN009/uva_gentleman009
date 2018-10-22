/******************** NILOY ****************/
#include<bits/stdc++.h>
#define lld long long int
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define f_input freopen("input.txt","r",stdin)
using namespace std;

bool prime(lld n)
{
    lld i, cnt=1;
    lld len=sqrt(n);

    for(i=2; i<=len; i++)
    {
        //cout<<n<<" "<<i<<" "<<n%i<<endl;
        if(n%i==0)
        {
            cnt=0;
            return false;
            break;

        }
    }
    if(cnt==1)
        {
            return true;
        }
}

lld rev(lld n)
{
    lld r=0, num, a;

    while(n>0)
    {
        r = 10*r + (n%10);
        n/=10;
    }
    a = r;
    return a;
}


int main()
{
    lld n, n_rev;

    while(cin>>n)
    {
        n_rev = rev(n);

        if(prime(n))
        {

            if(prime(n_rev))
            {
                if(n == n_rev)
                {
                    cout<<n<<" is prime."<<endl;
                }
                else
                {
                    cout<<n<<" is emirp."<<endl;
                }

            }
            else
            {
                cout<<n<<" is prime."<<endl;
            }

        }
        else
        {
            cout<<n<<" is not prime."<<endl;
        }
    }
    return 0;
}
