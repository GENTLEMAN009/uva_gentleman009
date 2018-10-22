#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char a[1000];
    int i, s;
    while(gets(a))
    {
        s = strlen(a);
        for(i=0; i<s; i++)
        {
            printf("%c", a[i]-7);
        }
        printf("\n");
    }
    return 0;
}
