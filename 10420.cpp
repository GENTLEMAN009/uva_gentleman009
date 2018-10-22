//*******************uncomplited

#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
int main()
{
    int i, n;
    string s;

    cin>>n;
    getchar();
        while(n--)
        {
            int E = 0, S = 0;
            getline(cin,s);
            if(s[0] == 'E')
            {
                E++;
            }
            else if(s[0] == 'S')
            {
                S++;
            }

            cout<<"ENGLAND "<<E<<endl;
            cout<<"SPAIN "<<S<<endl;
        }

        return 0;

}
