
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
#define pi acos(-1.0)
#define PI 3.1415926535897932385
#define Sin(a) sin((pi*a)/180)
#define siz 1000001
#define mem(ar) memset(ar,0,sizeof ar)
#define one(x) __builtin_popcount(x)
typedef long long ll;
using namespace std;

map<ll,bool>visi;
int ar[siz],ar2[siz],ar3[siz];
vector<int>vec,vec2;
int ind[siz];
int main()
{
    int  i,j,n,m,a,c,b,ck,t,r,x,y,ans,rem,cnt,lo,hi,sum,cs=1;
    si(t);
    string chr;
    getline(cin,chr);
    getline(cin,chr);
    while(t--)
    {
        vec.clear();
        n=0;
        while(getline(cin,chr)&&chr.size()>0)
        {
            ar[n++]=atoi(chr.c_str());
        }

        r=0;
        memset(ind,-1,sizeof(ind));
        for(i=0; i<n; i++)
        {
            x=ar[i];
            vector<int>:: iterator it=lower_bound(vec.begin(),vec.end(),x);
            if(vec.end()==it)
            {
                vec.pb(x);
                ar2[r]=i;
                if(r-1>=0)
                {
                    ind[i]=ar2[r-1];
                }
                r++;
            }
            else
            {
                vec[it-vec.begin()]=x;
                ar2[it-vec.begin()]=i;
                if(it-vec.begin()-1>=0)
                {
                    ind[i]=ar2[it-vec.begin()-1];
                }
            }
        }
        printf("Max hits: %d\n",vec.size());

        x=ar2[r-1];
        r=0;
        ar3[r++]=ar[x];
        while(ind[x]!=-1)
        {
            x=ind[x];
            ar3[r++]=ar[x];
        }
        reverse(ar3,ar3+r);
        for(i=0; i<r; i++) printf("%d\n",ar3[i]);
        if(t) puts("");
    }


}

