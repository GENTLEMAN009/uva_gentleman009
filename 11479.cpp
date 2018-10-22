#include<bits/stdc++.h>
#include<cstdio>
#define SIZE 1000
#define Pi 2*acos(0.0)
using namespace std;
int main()
{
    long long int T, a, b, c, cs=1;

    cin>>T;
    while(T--)
    {
        cin>>a>>b>>c;

        if((a+b<=c) || (c+b<=a) || (a+c<=b))
        {
            printf("Case %lld: ", cs++);
            cout<<"Invalid"<<endl;
        }
        else if(a==b && b==c)
        {
            printf("Case %lld: ", cs++);
            cout<<"Equilateral"<<endl;
        }
        else if((a==b || b==c || c==a) && ((a+b>=c) || (c+b>=a) || (a+c>=b)))
        {
            printf("Case %lld: ", cs++);
            cout<<"Isosceles"<<endl;
        }
        else if(((a!=b && b!=c && c!=a) && ((a+b>=c) || (c+b>=a) || (a+c>=b))))
        {
            printf("Case %lld: ", cs++);
            cout<<"Scalene"<<endl;
        }
    }
    return 0;
}
