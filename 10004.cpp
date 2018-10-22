#include<bits/stdc++.h>
#define Max 100010
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
#define f_input freopen("input.txt","r",stdin)
using namespace std;
//int visited[100000];
int main()
{
    //
   // f_input;
    int n,e,p;
    while(cin>>n)
    {

        if(n==0)
        {
            break;
        }
        cin>>e;
        vector<int>ed[100000];
        int visit[10000];
        mem(visit,-1);

        for(int i=0;i<e;i++)
        {
            int x,y;
            cin>>x>>y;
            ed[x].push_back(y);
            ed[y].push_back(x);
        }

        queue<int>work;
        int f=0;
        visit[0]=0;
        work.push(0);

        while(!work.empty())
        {
            p=work.front();
            work.pop();
            int vsize=ed[p].size();
            for(int i=0;i<vsize;i++)
            {
                if(visit[ed[p][i]]==-1)
                {
                    if(visit[p]==0)
                     visit[ed[p][i]]=1;
                    else
                    visit[ed[p][i]]=0;
                     work.push(ed[p][i]);
                }
                else
                {
                    if(visit[ed[p][i]]==visit[p]){
                        f=1;
                        break;
                    }
                }
            }
            if(f==1)
                break;
        }
        if(f==1)
        cout<<"NOT BICOLORABLE."<<endl;
        else
        cout<<"BICOLORABLE."<<endl;
    }

    return 0;
}
