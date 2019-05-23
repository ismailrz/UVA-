
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
int ar[1001];
int sum,ck;
vector<int>ve;
string st[100];
int main()
{
    string s1,s2;
    int i,j,n,l,r,r1,t,ck,ck2;
    cin>>t;
    while(t--)
    {
        cin>>s1;
        n=s1.size();
        ck2=0;
        for(j=1; j<n; j++)
        {
            ck= r1=r=0;
            while(r<n)
            {
                for(i=r; i<r+j; i++)
                {
                    s2+=s1[i];
                }
                if(s2.size()==j)
                {
                    st[r1++]=s2;
                }
                s2="";
                r+=j;
            }
            for(i=1; i<r1; i++)
            {
                if(st[0]!=st[i])
                {
                    ck=1;
                    break;
                }
            }
            if(ck==0&&r1>1)
            {
                cout<<st[0].size()<<endl;
                ck2=1;
                break;
            }
        }
        if(ck2==0)
            cout<<n<<endl;
        if(t>0)

            printf("\n");
    }
}

