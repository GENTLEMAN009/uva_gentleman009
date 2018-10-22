#include<bits/stdc++.h>
using namespace std;
int lcs[1001][1001];

// Code of LCS

int main(){
    int n,m;
    int a,b, cnt=0;
    int s1[1000], s2[1000];

    while(cin>>n>>m){
        //getline(cin,s2);
        //n=s1.size();
        //m=s2.size();

        if(n == 0 && m == 0)
        {
            return 0;
        }
        else
        {
            //cnt=0;
            for(a=0; a<n; a++)
            {
                cin>>s1[a];
            }

            for(b=0; b<m; b++)
            {
                cin>>s2[b];
            }

            for(int i=n;i>=0;i--){
            for(int j=m;j>=0;j--){
                if(i==n || j==m){
                    lcs[i][j]=0;
                    continue;
                }
                if(s1[i]==s2[j]) lcs[i][j]=1+lcs[i+1][j+1];
                else lcs[i][j]=max(lcs[i+1][j],lcs[i][j+1]);
            }
        }
        printf("Twin Towers #%d\n", ++cnt);
        printf("Number of Tiles : %d\n\n",lcs[0][0]);
        }

    }

    return 0;
}

