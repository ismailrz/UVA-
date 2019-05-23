#include<iostream>
#include<cstdio>
#include<utility>
#include<cstring>
#include<queue>
#include<cmath>
#define uu first
#define vv second
#include<vector>
#define pii pair<int,int>
typedef long long li;
#define mx 1010
using namespace std;
int fx[]= {2,-2,0,0};
int fy[]= {0,0,2,-2} ;
int fx1[]= {0,0,0,0,1,-1,1,-1};
int fy1[]= {1,-1,1,-1,0,0,0,0};
int cell[100][100];
int d[100][100],vis[100][100];
int ar[mx];
bool isprime[mx];
void sive()
{
    int   i,sqt,j;
    for(i=4; i<=mx; i+=2)
        isprime[i]=true;
    isprime[0]=true;
    sqt=sqrt(mx);
    for(i=3; i<= sqt; i+=2)
    {
        for(j=2*i; j<=mx; j+=i)
            isprime[j]=true;
    }
}
int main()
{
    sive();
    int i,j,n,di,c,s,r,ni,k;
    while(scanf("%d%d",&n,&c)==2)
    {
        printf("%d %d: ",n,c);
        r=k=0;
        for(i=0; i<=n; i++)
        {
            if(isprime[i]==false)
            {
                ar[r++]=i;
            }
        }
        if(r%2==1)
        {
            ni=r/2;
            c=c*2-1;
            if(c>=r)
            {
                for(i=0; i<r; i++)
                {
                    printf("%d",ar[i]);
                    if(i<=r-2)
                        printf(" ");
                }
            }
            else
            {
                s=(c-1)/2;
                s=ni-s;
                for(i=s; i<r; i++)
                {
                    if(k==c)
                        break;
                    else
                        printf("%d",ar[i]);
                    if(k<c-1)
                        printf(" ");
                    k++;
                }
            }
        }
        else
        {
            ni=r/2;
            c=c*2;
            if(c>=r)
            {
                for(i=0; i<r; i++)
                {
                    printf("%d",ar[i]);
                    if(i<=r-2)
                        printf(" ");
                }
            }
            else
            {
                s=c/2;
                s=ni-s;
                for(i=s; i<n; i++)
                {
                    if(k==c)
                        break;
                    printf("%d",ar[i]);
                    if(k<c-1)
                        printf(" ");
                    k++;
                }
            }
        }
        printf("\n\n");
    }
}
