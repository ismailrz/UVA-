/******************************************************************
 *                   BISMILLAHIR RAHMANIR RAHIM                   *
 *                     Saddam Hossain shishir                     *
 *       Hajee Mohammad Danesh Science & Technology University    *
 *                                                                *
 ***************************************************************** */
#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
#include<string>
#include<set>
#include<cmath>
#include<cctype>
#include<stack>
#include<cstdlib>
#include<utility>
#include<vector>
#include<deque>
#include<queue>
#include<algorithm>

#define sc scanf
#define si(t) scanf("%d",&t)
#define sl(t) scanf("%I64d",&t)
#define sii(a,b) scanf("%d%d",&a,&b)

#define P(a) printf("%d\n",a)
#define PLN(a) printf("%I64d ",a)
#define pf printf
#define pb push_back

#define gcd(a,b) __gcd(a,b)
#define ff first
#define ss second
#define pr1(a) cout<<a<<endl
#define pr2(a,b) cout<<a<<" "<<b<<endl

#define pii pair<int,int>
#define pi acos(-1.0)
#define PI 3.1415926535897932385
#define Sin(a) sin((pi*a)/180)
#define siz 1000001
#define mem(ar) memset(ar,0,sizeof ar)
#define one(x) __builtin_popcount(x)
typedef long long ll;
using namespace std;
//int dx[]= {-1,-1,0,0,1,1};
//int dy[]= {-1,0,-1,1,0,1};
//int dx[]= {0,0,1,-1};/*4 side move*/
//int dy[]= {-1,1,0,0};/*4 side move*/
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
int parent[100],visited[1000];
vector<int>adj[30001];
vector<int>cost[1001];
map<string,int>mp;
map<string,int>visi2;
class graph
{
public:
    int u,v;
    graph()
    {

    }
    graph(int a, int b)
    {
        u=a;
        v=b;
    }
};
bool operator<(graph A, graph B)
{
    return B.v>A.v;
}
int inf;
int main()
{
    int node1,node2,i,j,u,v,w,n,m,count,ans,r,cs=1;
    string s1,s2;
    while(cin>>n>>m)
    {
        inf =99999999;
        r=1;
        mem(visited);
        if(n==0 && m==0)
            break;
        mp.clear();
        visi2.clear();
        priority_queue<graph>PQ;
        for(i=1; i<=m; i++)
        {
            cin>>s1>>s2>>w;
            if(visi2[s1]==0)
            {
                mp[s1]=r++;
                visi2[s1]=1;
            }
            if(visi2[s2]==0)
            {
                mp[s2]=r++;
                visi2[s2]=1;
            }
            u=mp[s1];
            v=mp[s2];
            adj[u].pb(v);
            adj[v].pb(u);
            cost[u].pb(w);
            cost[v].pb(w);
        }
        cin>>s1>>s2;
        node1=mp[s1];
        node2=mp[s2];
        count=0;
        ans=0;
        parent[node1]=0;
        for(i=0; i<adj[node1].size(); i++)
            PQ.push(graph(adj[node1][i],cost[node1][i]));
        visited[node1]=1;
        graph top;
        while(true)
        {
            top=PQ.top();
            PQ.pop();
            u=top.u;
            if(visited[u]==0)
            {
                for(i=0; i<adj[u].size(); i++)
                {
                    PQ.push(graph(adj[u][i],cost[u][i]));
                }
                visited[u]=1;
                ans=top.v;
                if(inf>ans)
                    inf =ans;
                if(u==node2)
                    break;
            }
        }
        printf("Scenario #%d\n",cs++);
        printf("%d tons\n\n",inf);
        while(!PQ.empty())
            PQ.pop();
        for(i=1; i<=r; i++)
        {
            adj[i].clear();
            cost[i].clear();
        }
    }
    return 0;
}



