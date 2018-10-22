#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int T, cs=0;
    double amnt, tax;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%lf", &amnt);
        tax=0;
        if(amnt<=180000)
            {
                tax=0;
            }
        else
        {
            amnt-=180000;
            if(amnt>0)
            {
                if(amnt>300000)
                    {
                        tax+=30000;
                    }
                else
                {
                    tax+=(amnt*0.1);
                }
                amnt-=300000;
                if(amnt>0)
                {
                    if(amnt>400000)
                        {
                            tax+=60000;
                        }
                    else
                    {
                        tax+=(amnt*0.15);
                    }
                    amnt-=400000;
                    if(amnt>0)
                    {
                        if(amnt>=300000)
                            {
                                tax+=60000;
                            }
                        else
                        {
                            tax+=(amnt*0.20);
                        }
                        amnt-=300000;
                        if(amnt>0)
                            {
                                tax+=(amnt*0.25);
                            }
                    }
                }
            }
        }
        tax=ceil(tax);
        if(tax>0 && tax<=2000)
            {
                printf("Case %d: 2000\n", ++cs);
            }
        else if(tax>2000)
            {
                printf("Case %d: %.0lf\n", ++cs, tax);
            }
        else
        {
            printf("Case %d: 0\n",++cs);
        }
    }
    return 0;
}

