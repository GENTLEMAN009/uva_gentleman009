#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>


using namespace std;

int main()

{
    char arr[100000];
    int i,j,k,l,len;

    while(gets(arr))//Input
    {
        len = strlen(arr);

        k=-1;// value -1 is needed to presentation error
        for(i=0;i<len;i++)//Traversing the string
        {
            if(arr[i]== ' ')//Condition for blank space
            {
                for(j=i-1;j>k;j--)
                {
                    printf("%c",arr[j]);
                }
                printf(" ");
                    k = i;//Value of i is assigned to k
            }
        }
        for(l=len-1;l>k;l--)//last string is reversed
        {
            printf("%c",arr[l]);
        }
        printf("\n");
    }


    return 0;
}
