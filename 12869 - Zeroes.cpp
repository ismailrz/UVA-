
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

#define P(a) prlong longf("%d\n",a)
#define PLN(a) prlong longf("%I64d ",a)
#define pf prlong longf

#define gcd(a,b) __gcd(a,b)
#define ff first
#define ss second
#define pr1(a) cout<<a<<endl
#define pr2(a,b) cout<<a<<" "<<b<<endl

#define pii pair<long long,long long>
#define pi acos(-1.0)
#define PI 3.1415926535897932385
#define Sin(a) sin((pi*a)/180)
#define siz 1000001
#define mem(ar) memset(ar,0,sizeof ar)
#define one(x) __builtin_popcount(x)
typedef long long ll;
using namespace std;

map<ll,bool>visi;
#define siz1 100001
int  main()
{

    ll i,j,n,m,a,c,b,ck,t,x,y,ans,rem,sum3,cnt,lo,hi,sum,cs=1;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        if(a==0&&b==0)
            break;
        printf("%lld\n",b/5-a/5+1);
    }

}



