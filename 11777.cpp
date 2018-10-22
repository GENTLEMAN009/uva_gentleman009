#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int T, t1, t2, f, a, c1, c2, c3, G, c=0, Case=0;
    scanf("%d", &T);
    while(T--)
    {
        Case++;
        scanf("%d%d%d%d%d%d%d", &t1, &t2, &f, &a, &c1, &c2, &c3);
        if(c1>=c2 && c2<=c3)
        {
            c = (c1+c3)/2;
        }
        else if(c2>=c1 && c1<=c3)
        {
            c = (c2+c3)/2;
        }
        else if(c1>=c3 && c3<=c2)
        {
            c = (c1+c2)/2;
        }
        G = t1+t2+f+a+c;
        if(G>=90)
        {
            printf("Case %d: A\n", Case);
        }
        else if(G>=80 && G<90)
        {
            printf("Case %d: B\n", Case);
        }
        else if (G>=70 && G<80)
        {
            printf("Case %d: C\n", Case);
        }
        else if(G>=60 && G<70)
        {
            printf("Case %d: D\n", Case);
        }
        else if(G<60)
        {
            printf("Case %d: F\n", Case);
        }
    }
    return 0;
}
