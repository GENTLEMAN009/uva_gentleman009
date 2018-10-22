#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    int p, q, r, s, t,  u;
    double f, mi, hi, lo;

    while(cin>>p>>q>>r>>s>>t>>u)
    {
        if(p*exp(-1)+q*sin(1)+r*cos(1)+s*tan(1)+t*1*1+u>0.0000000001 || p+r+u<0)
        {
            cout<<"No solution"<<endl;
            continue;
        }

             lo=0.0;
            hi=1.0;

            for(int i=0; i<30; i++)
            {
                mi=(lo+hi)/2;

                f=p*exp(-mi)+q*sin(mi)+r*cos(mi)+s*tan(mi)+t*mi*mi+u;

                if(f>0) lo=mi;
                else hi=mi;

            }
        //p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u

        printf("%0.4lf\n", lo);
    }
}
