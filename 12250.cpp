#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    char a[20];
    int Case;

    for(Case=1;  ; Case++)
    {
        while(scanf("%s", &a)==1)
        {
            if(a[0]=='#')
            {
                return 0;
            }
            if(strcmp(a,"HELLO")==0)
                    printf("Case %d: ENGLISH\n",Case);
                else if(strcmp(a,"HOLA")==0)
                    printf("Case %d: SPANISH\n",Case);
                else if(strcmp(a,"HALLO")==0)
                    printf("Case %d: GERMAN\n",Case);
                else if(strcmp(a,"BONJOUR")==0)
                    printf("Case %d: FRENCH\n",Case);
                else if(strcmp(a,"CIAO")==0)
                    printf("Case %d: ITALIAN\n",Case);
                else if(strcmp(a,"ZDRAVSTVUJTE")==0)
                    printf("Case %d: RUSSIAN\n",Case);
                else
                    printf("Case %d: UNKNOWN\n",Case);
                break;
        }
    }
    return 0;
}

