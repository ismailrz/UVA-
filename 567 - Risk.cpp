
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

//input
#define sc scanf
#define si(t) scanf("%d",&t)
#define sl(t) scanf("%I64d",&t)
#define sf(t) scanf("%f",&t)
#define sd(t) scanf("%lf",&t)
#define sii(a,b) scanf("%d%d",&a,&b)
#define sll(a,b) scanf("%I64d%I64d",&a,&b)

//Output
#define P(a) printf("%dn",a)
#define PL(a) printf("%lldn",a)
#define PF(a) printf("%fn",a)
#define PDB(a) printf("%lfn",a)
#define PN(a) printf("%d ",a)
#define PLN(a) printf("%I64d ",a)
#define PDBN(a) printf("%lf ",a)
#define pf printf

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
#define mx 10001
#define pb push_back
typedef long long ll;
using namespace std;
vector<int>G[mx];
int visited[mx];
int level[mx];
int parent[mx];
void bfs(int src,int n)
{
    queue<int>Q;
    Q.push(src);
    visited[src]=1;
    level[src]=0;
    while(!Q.empty())
    {
        int u=Q.front();
        for(int i=0; i<G[u].size(); i++)
        {
            int v=G[u][i];
            if(!visited[v])
            {
                level[v]=level[u]+1;
                parent[v]=u;
                visited[v]=1;
                Q.push(v);
            }
        }
        Q.pop();
    }
}
int main()
{
    int i,j,n,x,y,src,des,r=1;
    while(cin>>n)
    {
        for(i=0; i<n; i++)
        {
            sc("%d",&x);
            G[1].pb(x);
            G[x].pb(1);
        }
        for(i=2; i<20; i++)
        {
            sc("%d",&n);
            for(j=0; j<n; j++)
            {
                cin>>x;
                G[i].pb(x);
                G[x].pb(i);
            }
        }
        sc("%d",&n);
        pf("Test Set #%d\n",r++);
        for(i=0; i<n; i++)
        {
            cin>>src>>des;
            bfs(src,des);
            if(src<10)
                pf(" ");
            pf("%d to ",src);
            if(des<10)
                pf(" ");
            pf("%d: ",des);
            cout<<level[des]<<endl;
            memset(level,0,sizeof level);
            memset(visited,0,sizeof visited);
        }
        pf("\n");
        for(i=0; i<=20; i++)
            G[i].clear();
    }
}
