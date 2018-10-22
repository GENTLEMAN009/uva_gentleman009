#include<bits/stdc++.h>
using namespace std;
unsigned long long func(unsigned long long n)
{
    if(n ==1)
    {
        return 1;
    }
    else if(n==2)
    {
        return 2;
    }
    else if(n>2)
    {
        return (func(n-1)+func(n-2));
    }
}
int main()
{
   unsigned long long a, n;

   while(scanf("%lld", &n)==1)
   {
       if(n==0)
       {
           return 0;
       }
       else
       {
           a = func(n);
           cout<<a<<endl;
       }
   }
}
