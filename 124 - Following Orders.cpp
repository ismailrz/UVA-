/// Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>

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
//int dx[]= {-1,-1,0,0,1,1};
//int dy[]= {-1,0,-1,1,0,1};
//int dx[]= {0,0,1,-1};/*4 side move*/
//int dy[]= {-1,1,0,0};/*4 side move*/
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*knight move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*knight move*/
map<ll,bool>visi;
vector<char>v;
int pred[100],n,len;
char  s[1001],s2[1001],s3[1001];
vector<char>vec[1001];
int str[1001][1000];
int cal(int ln)
{
    int id2,id;
    for(int i=0; i<v.size(); i++)
    {
        id=s2[ln]-'a';
        id2=v[i]-'a';
        if(str[id][id2]==1)
            return 1;
    }
    return 0;
}
void pe(char s[])
{
    int i,j,k;
    if(v.size()==len)
    {
        for(int j=0; j<v.size(); j++)
            printf("%c",v[j]);
        printf("\n");
        return;
    }
    for(i=0; i<len; i++)
    {
        if(pred[i]==0&&cal(i)==0)
        {
            pred[i]=1;
            v.push_back(s[i]);
            pe(s);
            pred[i]=0;
            v.pop_back();
            while(s[i]==s[i+1])
                i++;
        }
    }
}
int main()
{
    int i,j,k,r,r2,ck=0;
    while(gets(s))
    {
        mem(str);

        r=0;
        len=strlen(s);
        for(i=0; i<len; i++)
            if(isalpha(s[i])) s2[r++]=s[i];
        len=r;
        gets(s);
        if(ck) printf("\n");
        int len2=strlen(s);
        r=0;
        for(i=0; i<len2; i++)
            if(isalpha(s[i])) s3[r++]=s[i];
        char ch,ch2;
        for(i=0; i<r; i+=2)
        {
            ch=s3[i];
            ch2=s3[i+1];
            str[ch-'a'][ch2-'a']=1;
        }
        sort(s2,s2+len);
        pe(s2);
        v.clear();
        ck=1;
    }
}


