
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
string str[1000],str1[1001];
string st;
map<int,vector<string> >ma;
set<int>S;
int main()
{

    int  i,j,n,m,a,c,r,b,ck,t,x,y,z,k,len,ans,rem,cnt,lo,hi,sum,cs=1;
    scanf("%d",&t);
    ck=0;
    while(t--)
    {
        if(ck==1)
            printf("\n");
        ck=1;
        scanf("%d%d",&n,&m);
        for(i=0; i<m; i++)
        {
            cnt=0;
            cin>>st;
            for(j=0; j<n-1; j++)
            {
                for(k=j+1; k<n; k++)
                {
                    if(st[j]>st[k])
                        cnt++;
                }
            }
            S.insert(cnt);
            ma[cnt].push_back(st);
        }
        set<int>::iterator t;
        for(t=S.begin(); t!=S.end(); t++)
        {
            int id=*t;
            for(j=0; j<ma[id].size(); j++)
                cout<<ma[id][j]<<endl;
        }
        ma.clear();
        S.clear();
    }

}

