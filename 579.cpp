#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
int main()
{
    double h, m;
    double ha, ma, angle;

    while(scanf("%lf:%lf", &h, &m)==2)
    {
        if(h==0 && m==0)
        {
            return 0;
        }
        else
        {
            ha = h*30 + (m/60)*30;
            ma = m*6;
            angle = abs(ha-ma);
            if(angle>180)
            {
                angle = 360 - angle;
            }
            printf("%.3lf\n", angle);
        }
    }
    return 0;
}
