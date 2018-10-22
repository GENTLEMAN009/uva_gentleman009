// UnSolved //

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int s, i;
    char a[1000010];
    while(gets(a))
    {
        if(strcmp(a,"END")==0)
        {
            return 0;
        }
        else
        {
            s = strlen(a);
            if(strlen(a) == 1)
            {
                printf("1\n");
            }
            else
            {
                printf("%c\n", a[s-2]-1);
            }
        }
    }
    return 0;
}
