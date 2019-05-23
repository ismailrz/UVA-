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
map<ll,bool>visi;
ll vis[siz];
int main()
{
    ll i,j,n,k,z,I,m,L,b,c,d,cnt,cs=1;
    while(scanf("%lld%lld%lld%lld",&z,&I,&m,&L)==4)
    {
        mem(vis);
         if(z==0 && I==0&& m==0 && L==0) break;
        cnt=0;
        while(1)
        {
            n=((z*L)+I)%m;
            if(vis[n]==1)
            {
                break;
            }
            vis[n]=1;
            cnt++;
            L=n;
        }
        printf("Case %lld: %lld\n",cs++,cnt);
    }
}
