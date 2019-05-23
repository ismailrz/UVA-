
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

#define sc scanf
#define si(t) scanf("%d",&t)
#define sl(t) scanf("%I64d",&t)

#define sll(t) scanf("%lld",&t)

#define sii(a,b) scanf("%d%d",&a,&b)

#define P(a) printf("%d\n",a)
#define PLN(a) printf("%I64d ",a)
#define pf printf
#define gcd(a,b) __gcd(a,b)
#define ff first
#define ss second
#define pr1(a) cout<<a<<endl
#define pr2(a,b) cout<<a<<" "<<b<<endl
#define pb push_back
#define pii pair<int,int>
#define mk make_pair
#define pi acos(-1.0)
#define PI 3.1415926535897932385
#define Sin(a) sin((pi*a)/180)
#define siz 1000001
#define mem(ar) memset(ar,0,sizeof ar)
#define one(x) __builtin_popcount(x)
typedef long long ll;
using namespace std;

map<ll,bool>visi;
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
ll coin[7],n,money;
ll dp[16][30005];
void coin_()
{
    coin[1]=1;
    coin[2]=5;
    coin[3]=10;
    coin[4]=25;
    coin[5]=50;
}
void make()
{
    int i,j;
    for(i=0; i<=5; i++)
        dp[i][0]=1;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=30002; j++)
        {
            if(coin[i]>j)
            {
                dp[i][j]=dp[i-1][j];
            }
            else
            {
                dp[i][j]=dp[i][j-coin[i]]+dp[i-1][j];
            }
        }
    }
}

int main()
{
    ll i,j,a,c,b,d,ck,t,r,ans,rem,cnt,lo,hi,cs=1;
    coin_();
    make();
    while(sll(money)==1)
    {
        if(dp[5][money]==1)
        {
            printf("There is only 1 way to produce %lld cents change.\n",money);
        }
        else

            printf("There are %lld ways to produce %lld cents change.\n",dp[5][money],money);
    }

}
