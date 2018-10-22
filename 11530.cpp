#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
    int T, Case=0, i, n, b = 0;
    char a[105];
    scanf("%d", &T);
    getchar();
    while(T--)
    {
        Case++;
        gets(a);
        n = strlen(a);
        for(i=0; i<n; i++)
        {
            if(a[i]=='a' ||a[i]=='d' ||a[i]=='g' ||a[i]=='j' ||a[i]=='m' ||a[i]=='p' ||a[i]=='t' ||a[i]=='w' || a[i]==' ')
            {
                b = b + 1;
            }
            else if(a[i]=='b' ||a[i]=='e' ||a[i]=='h' ||a[i]=='k' ||a[i]=='n' ||a[i]=='q' ||a[i]=='u' ||a[i]=='x')
            {
                b = b + 2;
            }
            else if(a[i]=='c' ||a[i]=='f' ||a[i]=='i' ||a[i]=='l' ||a[i]=='o' ||a[i]=='r' ||a[i]=='v' ||a[i]=='y')
            {
                b = b + 3;
            }
            else if(a[i]=='s' ||a[i]=='z')
            {
                b = b + 4;
            }
        }
        printf("Case #%d: %d\n", Case, b);
        b = 0;
    }
    return 0;
}
