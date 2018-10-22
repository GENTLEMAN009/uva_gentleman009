#include<bits/stdc++.h>
#include<cstdio>
#define SIZE 1000
using namespace std;
int main()
{
    char input[SIZE], len, i, j,k, print[SIZE];

    while(gets(input))
    {
        len = strlen(input);
        // j=0;
        for(i=0; i<len; i++)
        {
            if(input[i] == 'B' || input[i] == 'F' || input[i] == 'P' || input[i] == 'V')
            {
                if(input[i-1] != 'B' && input[i-1] != 'F' && input[i-1] != 'P' && input[i-1] != 'V')
                {
                    //print[j++] = '1';
                    cout<<"1";
                }
            }
            else if(input[i] == 'C' || input[i] == 'G' || input[i] == 'J' || input[i] == 'K' || input[i] == 'Q' || input[i] == 'S' || input[i] == 'X' || input[i] == 'Z')
            {
                if(input[i-1] != 'C' && input[i-1] != 'G' && input[i-1] != 'J' && input[i-1] != 'K' && input[i-1] != 'Q' && input[i-1] != 'S' && input[i-1] != 'X' && input[i-1] != 'Z')
                {
//                    print[j++] = '2';
                    cout<<"2";
                }
            }
            else if(input[i] == 'D' || input[i] == 'T')
            {
                if(input[i-1] != 'D' && input[i-1] != 'T')
                {
                    //print[j++] = '3';
                    cout<<"3";
                }

            }
            else if(input[i] == 'L')
            {
                if(input[i-1] != 'L')
                {
                    //print[j++] = '4';
                    cout<<"4";
                }

            }
            else if(input[i] == 'M' || input[i] == 'N')
            {
                if(input[i-1] != 'M' && input[i-1] != 'N')
                {
                    //print[j++] = '5';
                    cout<<"5";
                }

            }
            else if(input[i] == 'R')
            {
                if(input[i-1] != 'R')
                {
                    //print[j++] = '6';
                    cout<<"6";
                }

            }
        }
        printf("\n");
    }
    return 0;
}
