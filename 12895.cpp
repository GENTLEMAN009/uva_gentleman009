#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    long long int a[100];
    long long int T, i, n, n1, sum, j,rem;

    cin>>T;
    while(T--)
    {
        cin>>n;
        sum=0;
        n1=n;
        j=0;


        while(n1!=0)
        {
            a[j]=n1%10;
            n1=n1/10;
            j++;
        }

        for(i=sum=0; i<j; i++)
        {
            sum = sum + pow(a[i],j);
            //cout<<sum<<" "<<pow(a[i],j)<<" "<<i<<endl;
        }

        if(sum == n)
        {
            cout<<"Armstrong"<<endl;
        }
        else
        {
            cout<<"Not Armstrong"<<endl;
        }
    }
}

