#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;


int main()
{
    int n, g[Max], q, qr;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>g[i];
    }

    cin>>q;
    //cout<<q;
    int low, high, mid, l, h, c;
    bool fnd;
    while(q--)
    {
        cin>>c;
        //cout<<qr;

        low=0;
        int up,down;
        high=n-1;
        fnd=false;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(g[mid]==c)
            {
                l=mid-1;
                h=mid+1;
                fnd=true;
                break;
            }
            else if(g[mid]>c)
            {
                high=mid-1;
                l=low;
                h=high;
            }
            else
            {
                low=mid+1;
                l=low;
                h=high;
            }
        }
        if(fnd==true)
        {
            if(l<0)
                cout<<"X "<<g[h]<<endl;
            else if(h>=n)
                cout<<g[l]<<" X"<<endl;
            else
                cout<<g[mid-1]<<" "<<g[mid+1]<<endl;
        }
        else
        {
            if(h==n-1)
                cout<<g[h]<<" X"<<endl;
            else if(h<0)
                cout<<"X "<<g[l]<<endl;
            else
                cout<<g[h]<<" "<<g[l]<<endl;
            //cout<<l<<" index "<<h<<endl;
        }
    }
    return 0;
}
