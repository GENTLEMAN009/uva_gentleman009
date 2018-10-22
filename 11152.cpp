/*#include<iostream>
#include<cstdio>
#include<cmath>
#define pi 2*acos(0.0)

using namespace std;

int main()
{
    int a, b, c;
    double x, R, V, S;

    while(scanf("%lf%lf%lf", &a, &b, &c) == 3)
    {
        x = 0.5*a*b;
        R = (pi*x)/(.5*(a+b+c));
        V = x - R;
        S = pi*((c/2.0)*(c/2.0))-x;
        printf("%.4lf %.4lf %.4lf\n", S, V, R);
    }
}*/
//************************UPPER CASE IS ALSO RIGHT BUT DONT KNOW WHY WA***************************
#include<iostream>
#include<cstdio>
#include<cmath>
#define pi 2*acos(0.0)
using namespace std;

int main()
{
    double  a, b, c;
    double S_r, R_r, S, V, R, x, k;

    while(scanf("%lf%lf%lf", &a, &b, &c)==3)
    {
        k =(a+b+c)/2;
        x = sqrt(k*(k-a)*(k-b)*(k-c));
        R_r = x/k;
        S_r = (a*b*c)/(4*x);
        R = R_r*pi*R_r;
        S = (pi*S_r*S_r)-x;
        V = k - R;
        printf("%.4lf %.4lf %.4lf\n", S, V, R);
    }
    return 0;
}

/*#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>

int main()
{
    double a,b,c;
    double s,area_bigc,big_r, small_r,area_t,sun,viol,ross;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        s=(a+b+c)/2;
        area_t=sqrt(s*(s-a)*(s-b)*(s-c));
        big_r=(a*b*c)/(4*area_t);
        small_r=area_t/s;
        ross=4*atan(1)*small_r*small_r;
        viol=area_t-ross;
        area_bigc=4*atan(1)*big_r*big_r;
        sun=area_bigc-area_t;
        printf("%.4lf %.4lf %.4lf %.4lf\n",sun,viol,ross, atan(1));
    }
    return 0;
}*/
