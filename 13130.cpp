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
    lld t, a, b, c, d, e;

    cin>>t;

    for(_I i =0; i<t; i++)
    {
        cin>>a>>b>>c>>d>>e;

        if((a+1)==b && (b+1)==c && (c+1)==d && (d+1)==e)
        {
            cout<<"Y"<<endl;
        }
        else
        {
            cout<<"N"<<endl;
        }
    }
}
