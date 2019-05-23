
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
int ar[siz];
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
int cost[siz],weight[siz],item,dp[101][50001],tot_weight;
int knapsack()
{
    int i,j,val,row,col;
    for(i=1; i<=item; i++)
    {
        for(j=1; j<=tot_weight; j++)
        {
            if(weight[i]<=j)
            {
                val=cost[i];
                row=i-1;
                col=j-weight[i];
                dp[i][j]=max(val+dp[row][col],dp[i-1][j]);
            }
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    return dp[item][tot_weight];

}
vector<int>ans;
void find_item(int i,int j)
{
    if(dp[i][j]==0) return ;
    else if(dp[i-1][j]==dp[i][j]) find_item(i-1,j);
    else
    {
        ans.pb(i);
        find_item(i-1,j-weight[i]);
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    int  i,j,n,m,a,c,b,d,ck,t,r,x,y,rem,cnt,lo,hi,sum,cs=1;
    si(t);
    while(t--)
    {
        mem(dp);
        si(item);
        sum=0;
        for(i=1; i<=item; i++)
        {
            si(x);
            sum+=x;
            cost[i]=x;
            weight[i]=x;
        }
        tot_weight=sum/2;

        hi=knapsack();
        lo=sum-hi;
        x=hi-lo;
        if(x<0) x*=-1;
        printf("%d\n",x);
    }

}


