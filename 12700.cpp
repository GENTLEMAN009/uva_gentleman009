#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T, n, b, w, a, i, t, cs=1;
    char str[20];

    scanf("%d", &T);
    while(T--)
    {
        a=0;
        b=0;
        w=0;
        t=0;
        scanf("%d", &n);
        scanf("%s", str);
        for(i=0; i<n; i++)
        {
            if(str[i] == 'B')
            {
                b++;
            }
            else if(str[i] == 'W')
            {
                w++;
            }
            else if(str[i] == 'A')
            {
                a++;
            }
            else if(str[i] == 'T')
            {
                t++;
            }
        }
         if(b==0 && w==0 && a>0 && t==0)
        {
              printf("Case %d: ABANDONED\n",cs++);
        }
         else if(b==0 && t==0)
        {
            printf("Case %d: WHITEWASH\n",cs++);
        }
        else if(t==0 && w==0)
        {
                 printf("Case %d: BANGLAWASH\n",cs++);
        }
        else if(b>w)
        {
            printf("Case %d: BANGLADESH %d - %d\n",cs++,b,w);
        }
        else if(w>b)
        {
            printf("Case %d: WWW %d - %d\n",cs++,w,b);
        }
        else if(b==w)
        {
            printf("Case %d: DRAW %d %d\n",cs++,b,t);
        }
    }
}
