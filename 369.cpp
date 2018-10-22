#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int dp[110][110];
//Initialise array elements with zero
int nCr(int n, int r)
{
       if(n==r) return dp[n][r] = 1; //Base Case
       if(r==0) return dp[n][r] = 1; //Base Case
       if(r==1) return dp[n][r] = n;
       if(dp[n][r]) return dp[n][r]; // Using Subproblem Result
       return dp[n][r] = nCr(n-1,r) + nCr(n-1,r-1);
}

int main()
{
    long long int n, r, i, j;

    while(cin>>n>>r)
    {
       if(n == 0&& r == 0)
       {
           break;
       }
       else
       {
            i = nCr(n, r);
            cout<<n<<" things taken "<<r<<" at a time is "<<i<<" exactly."<<endl;
       }

    }
}
