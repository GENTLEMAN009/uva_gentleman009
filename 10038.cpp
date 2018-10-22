#include<iostream>
#include<cstdio>
#include<algorithm>
#define MAX 10000
using namespace std;
int main()
{
    long long int num[MAX],num1[MAX],result,i,count,n;
    while(scanf("%lld",&n)==1)
    {
        count=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&num[i]);
        }
        for(i=0;i<n-1;i++)
        {
            num1[i]=abs(num[i+1]-num[i]);
        }
        sort(num1,num1+i);
        for(i=1;i<n;i++)
        {
            if((num1[i]==num1[i-1]))
            {
                count=1;
                break;
            }
            else
            {
                count=0;
            }
        }
        if(count==1)
        {
           printf("Not jolly\n");
        }
        else
        {
            printf("Jolly\n");
        }
    }
    return 0;
}


