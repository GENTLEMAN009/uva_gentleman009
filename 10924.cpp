/******************** NILOY ****************/
#include<bits/stdc++.h>
#define lld long long int
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define f_input freopen("input.txt","r",stdin)
using namespace std;

bool prime(int n)
{
    if(n==0) return false;
    else if(n == 1) return true;
    else
    {
        for(int i = 2; i*i<=n; i++)
        {
            if(n % i == 0) return false;
        }
        return true;
    }
}

int main()
{
    string a;

    while(cin>>a)
    {
        int sum = 0, add;
        int l = a.size();
        for(int i=0; i<l; i++)
        {
            if(a[i]>='a' && a[i]<='z')
            {
               add = (a[i] - 'a') + 1;
               sum = sum + add;
            }
            else if(a[i]>='A' && a[i]<='Z')
            {
                add = (a[i] - 'A') + 27;
               sum = sum + add;
            }
        }
        if(prime(sum))
        {
            cout<<"It is a prime word."<<endl;
        }
        else if(!prime(sum))
        {
            cout<<"It is not a prime word."<<endl;
        }
    }
    return 0;
}
