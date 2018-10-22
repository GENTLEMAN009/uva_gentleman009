#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>


using namespace std;

int main()
{
    int i, j, k;
    char s[1000];

    while(gets(s))
    {

        k = 0;
        j=1;
        for(i=0; s[i]; i++)
        {
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
            {
                if(j == 1)
                {
                    k++;
                    j = 0;
                }
            }
            else
                {
                    j = 1;
                }
        }
        printf("%d\n", k);
    }
    return 0;
}
