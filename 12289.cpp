#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
    char s[10];
    int i=0, l, T;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%s", &s);
        l = strlen(s);
        if(l==5)
        {
            printf("3\n");
        }
        else if((s[0]=='o' && s[1]=='n')||
          (s[0]=='o' && s[1]=='e')||
          (s[1]=='n' && s[2]=='e')||
          (s[0]=='o' && s[2]=='e')||
          (s[0]=='o' && s[2]=='n'))
        {
            printf("1\n");

        }
        else
        {
            printf("2\n");
        }

    }
    return 0;
}
