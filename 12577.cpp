#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char a[10];
    int Case=0;

    while(gets(a))
    {
        Case++;
        if(a[0] == '*')
        {
            return 0;
        }
        else
        {
            if(strcmp(a,"Hajj")==0)
            {
                printf("Case %d: Hajj-e-Akbar\n", Case);
            }
            else if(strcmp(a,"Umrah")==0)
            {
                printf("Case %d: Hajj-e-Asghar\n", Case);
            }
        }
    }
    return 0;

}
