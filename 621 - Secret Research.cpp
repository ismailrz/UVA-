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
#define siz 300001
#define mem(ar) memset(ar,0,sizeof ar)
#define one(x) __builtin_popcount(x)
#define mod 100000009
#define faster ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
using namespace std;
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

string st;
int main()
{

    int  n,i,j,a,b,x,y,ck,t,r,ans,rem,cnt,lo,hi,sum,cs=1;
    cin>>n;
    while(n--)
    {
        cin>>st;
        r=st.size();
        if(st[r-2]=='3'&& st[r-1]=='5')
            cout<<"-\n";
        else if(st[0]=='9' && st[r-1]=='4' ) cout<<"*\n";
        else if( st[0]=='1'&& st[1]=='9'&& st[2]=='0') cout<<"?\n";
        else cout<<"+\n";

    }

}

