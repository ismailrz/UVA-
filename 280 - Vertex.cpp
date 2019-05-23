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
#include<limits>
#include<limits.h>

#define all(v) v.begin(),v.end()

#define sc scanf
#define si(t) scanf("%d",&t)
#define sl(t) scanf("%I64d",&t)

#define sii(a,b) scanf("%d%d",&a,&b)

#define P(a) printf("%d\n",a)
#define PLN(a) printf("%I64d ",a)
#define pf printf

#define gcd(a,b) __gcd(a,b)
#define ff first
#define ss second

#define pb push_back
#define pii pair<int,int>
#define mk make_pair
#define pi acos(-1.0)
#define PI 3.1415926535897932385
#define Sin(a) sin((pi*a)/180)
#define siz 1001
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
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*knight move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*knight move*/

//'A'=65,'Z'=90 'a'=97 'z'=122 '0'=48


//upper bound and lower bound

#define LB(a,value) (lower_bound(all(a),value)-a.begin())
#define UB(a,value) (upper_bound(all(a),value)-a.begin())
//S.insert(lower_bound(S.begin( ),S.end( ),x),x); //S is vector

int Set(int N,int pos)
{
    return N=N | (1<<pos);
}
int reset(int N,int pos)
{
    return N= N & ~(1<<pos);
}
bool check(int N,int pos)
{
    return (bool)(N & (1<<pos));
}
int cnt=0;
vector<int>graf[siz],vec;
int vis[siz],ind[siz][siz],ind2[siz][siz];
void bfs(int src)
{
    mem(vis);
    queue<int >Q;
    Q.push(src);
    // vis[src]=1;
    while(!Q.empty())
    {
        int  u=Q.front();
        for(int i=0; i<graf[u].size(); i++)
        {
            int  v=graf[u][i];
            if(!vis[v])
            {
                vis[v]=1;
                Q.push(v);
            }
        }
        Q.pop();
    }
}
int main()
{
    int i,j,k,n,node,cn,cn1,cnt,r=0;
    int  x,y;
    while(si(n)==1)
    {
        mem(ind);
        if(n==0) break;
        while(1)
        {
            si(x);
            if(x==0) break;
            si(y);
            while(1)
            {
                if(y==0) break;
                graf[x].pb(y);
                si(y);
            }
        }
        si(node);
        for(i=0; i<node; i++)
        {
            si(x);
            bfs(x);
            for(j=1; j<=n; j++)
            {
                if(vis[j]==0)
                {
                    vec.pb(j);
                }
            }
            printf("%d",vec.size());
            for(j=0; j<vec.size(); j++)
                printf(" %d",vec[j]);
            printf("\n");
            vec.clear();
        }
        for(i=1; i<=n; i++)
            graf[i].clear();
    }

}
