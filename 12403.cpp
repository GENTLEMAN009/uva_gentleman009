#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
    char s[10];
    int d, k=0, T;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%s", s);
        if(strcmp(s,"donate")==0)
        {
            scanf("%d", &d);
            k = k +d;
        }
        else if(strcmp(s,"report")==0)
        {
            printf("%d\n", k);
        }

    }
    return 0;
}
