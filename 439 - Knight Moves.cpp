
#include<bits/stdc++.h>

#define all(v) v.begin(),v.end()
#define sc scanf
#define si(t) scanf("%d",&t)
#define sl(t) scanf("%I64d",&t)
#define sii(a,b) scanf("%d%d",&a,&b)
#define pt(a) printf("%d\n",a)
#define PLN(a) printf("%I64d\n",a)
#define pf printf
#define gcd(a,b) __gcd(a,b)
#define ff first
#define ss second
#define pb push_back
#define pii pair<int,int>
#define mp make_pair
#define pi acos(-1.0)
#define PI 3.1415926535897932385
#define Sin(a) sin((pi*a)/180)
#define siz 3000001
#define mem(ar) memset(ar,0,sizeof ar)
#define one(x) __builtin_popcount(x)
#define mod 100000009
#define faster ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;

using namespace std;
int dx[]= {1,1,2,2,-1,-1,-2,-2}; /*knight move*/
int dy[]= {2,-2,1,-1,2,-2,1,-1}; /*knight move*/

#define LB(a,value) (lower_bound(all(a),value)-a.begin())
#define UB(a,value) (upper_bound(all(a),value)-a.begin())

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

int d[100][100],vis[100][100];
int row,col;
void bfs(int sx,int sy)
{
    int j,r;
    memset(vis,0,sizeof vis);
    vis[sx][sy]=1;
    queue<pii>q;
    q.push(pii(sx,sy));
    while(!q.empty())
    {
        pii top=q.front();
        q.pop();
        j=r=0;
        for(int k=0; k<8; k++)
        {
            int tx=top.ff+dx[k];
            int ty=top.ss+dy[k];
            if(tx>=1&&tx<=row &&ty>=1 &&ty<=col&&vis[tx][ty]==0)
            {
                vis[tx][ty]=1;
                d[tx][ty]=d[top.ff][top.ss]+1;
                q.push(pii(tx,ty));
            }
        }
    }
}
int main()
{
    row =col=8;
    int x,ro1,co1,ro2,co2;
    char c1,c2;
    while(cin>>c1>>ro1)
    {
        co1=c1-96;
        bfs(ro1,co1);
        cin>>c2>>ro2;
        co2=c2-96;
        cout<<"To get from "<<c1<<ro1<<" to "<<c2<<ro2<<" takes "<<d[ro2][co2]<<" knight moves.\n";
        memset(d,0,sizeof d);
    }
}

