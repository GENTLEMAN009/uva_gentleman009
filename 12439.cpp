/******************** NILOY ****************/
#include<bits/stdc++.h>
#define lld long long int
#define _I int
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define f_input freopen("input.txt","r",stdin)
using namespace std;

int main()
{
    map <string,int>m;

    lld i,j,k,n,t;
    string m1,b,m2;
    lld year1,date1,year2,date2,f0=0,f1=0;
    string s[20]= {"A","January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};//store A just for count january as 1 february 2.....
    for(i=1; i<=12; i++)
    {
        m[s[i]]=i;

    }

    cin>>t;
    for(i=1; i<=t; i++)
    {
        f0=0,f1=0;
        cin>>m1>>date1>>b>>year1;

        cin>>m2>>date2>>b>>year2;
        j=0;

         year1--;// for formula

         if(m[m1]>2 ) // first month march to december
            year1++;
          if((m[m2]<2) || (m[m2]==2 && date2<29))// last month friday or february date less then 29
            year2--;

        lld leapyear=(year2/4-year2/100+year2/400)-(year1/4-year1/100+year1/400);




            cout<<"Case "<<i<<": "<<leapyear<<endl;


    }
    return 0;


}
