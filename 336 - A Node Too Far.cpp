#include<cstdio>
#include<cstring>
#include<vector>
#include<cstdlib>
#include<iostream>
using namespace std;
#include<queue>
#include<set>
#define MAX 100001
vector<int>edges[MAX];
vector<int>cost[MAX];
queue<int>q;
queue<int>q2;
set<int>s;
int visi[MAX];
set<int>s1;
int cn,r,ar[MAX];
void cal(int m)
{
    int i,j,v;
    visi[m]=1;
    for(i=0; i<edges[m].size(); i++)
    {
        v=edges[m][i];
        if(visi[v]==0)
        {
            visi[v]=1;
            q.push(v);
            cn++;
        }
    }
}
int main()
{
    int a,b,N,E,i,v,j,m,r,h,k,cs=1;
    while(scanf("%d",&N)==1)
    {
        if(N==0)
            return 0;
        r=0;
        k=0;
        for(i=1; i<=N; i++)
        {
            int x,y;
            cin>>x>>y;
            s.insert(x);
            s.insert(y);
            edges[x].push_back(y);
            edges[y].push_back(x);
        }
        while(cin>>a>>b)
        {
            if(a==0&&b==0)
                break;
            if(b==0)
            {
                printf("Case %d: ",cs++);
                cout<<s.size()-cn-1;
                printf(" nodes not reachable from node %d with TTL = %d.\n",a,b);
            }
            else
            {
                cal(a);
                r++;
                while(r<=b-1)
                {
                    q2=q;
                    while(!q2.empty())
                    {
                        m=q2.front();
                        cal(m);
                        q2.pop();
                    }
                    r++;
                }
                printf("Case %d: ",cs++);
                cout<<s.size()-cn-1;
                printf(" nodes not reachable from node %d with TTL = %d.\n",a,b);
                cn=r=0;
            }
            while(!q.empty())
            {
                q.pop();
            }
            memset(visi,0,sizeof visi);
        }
        for(i=0; i<MAX; i++)
            edges[i].clear();
        s.clear();
    }
    return 0;
}

