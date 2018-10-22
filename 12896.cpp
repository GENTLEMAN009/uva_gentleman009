#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase,num,i,j,k,l,a[1001],b[1001];
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d",&num);
        for(i=0;i<num;i++)
        {
            scanf("%d",&a[i]);
        }
        for(j=0;j<num;j++)
        {
            scanf("%d",&b[j]);
        }
        for(k=0;k<num;k++)
        {
            if(a[k]==0)
            {
                if(b[k]==1)
                 printf(" ");
            }
            if(a[k]==1)
            {
                if(b[k]==1)
                    printf(".");
                else if(b[k]==2)
                    printf(",");
                else if(b[k]==3)
                    printf("?");
                else printf("\"");
            }
            if(a[k]==2)
            {
                if(b[k]==1)
                    printf("a");
                else if(b[k]==2)
                    printf("b");
                else if(b[k]==3)
                    printf("c");
            }
            if(a[k]==3)
            {
                if(b[k]==1)
                    printf("d");
                else if(b[k]==2)
                    printf("e");
                else if(b[k]==3)
                    printf("f");
            }
            if(a[k]==4)
            {
                if(b[k]==1)
                    printf("g");
                else if(b[k]==2)
                    printf("h");
                else if(b[k]==3)
                    printf("i");
            }
            if(a[k]==5)
            {
                if(b[k]==1)
                    printf("j");
                else if(b[k]==2)
                    printf("k");
                else if(b[k]==3)
                    printf("l");
            }
            if(a[k]==6)
            {
                if(b[k]==1)
                    printf("m");
                else if(b[k]==2)
                    printf("n");
                else if(b[k]==3)
                    printf("o");
            }
            if(a[k]==7)
            {
                if(b[k]==1)
                    printf("p");
                else if(b[k]==2)
                    printf("q");
                else if(b[k]==3)
                    printf("r");
                else printf("s");
            }
            if(a[k]==8)
            {
                if(b[k]==1)
                    printf("t");
                else if(b[k]==2)
                    printf("u");
                else if(b[k]==3)
                    printf("v");
            }
            if(a[k]==9)
            {
                if(b[k]==1)
                    printf("w");
                else if(b[k]==2)
                    printf("x");
                else if(b[k]==3)
                    printf("y");
                else printf("z");
            }

        }
        printf("\n");
    }

}

