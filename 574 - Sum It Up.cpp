#include<bits/stdc++.h>
using namespace std;
vector<int>v;
vector<int>v2;
int ar[20];
int sum2,r,ck=0;
char str[1000];
string s2[10000];
string s,s4;
map<string,bool>mp;
void printSet(int array[],int size)
{
    int i,x,sum=0;
    for (i=1; i<=size; i++)
    {
        x=array [i];
        sum+=ar[x];
        v.push_back(ar[x]);
        sprintf(str,"%d",ar[x]);
        s+=str;
    }
    if(sum==sum2)
    {
        if(mp[s]==false)
        {
            for(i=0; i<size; i++)
            {
                printf("%d",v[i]);
                if(i<size-1)
                    printf("+");
                ck=1;
            }
            printf("\n");
            mp[s]=true;
        }
    }
    s="";
    v.clear();
}
void printPowerset (int n)
{
    int stack[100],k;
    stack[0]=0;
    k = 0;
    while(1)
    {
        if (stack[k]<n)
        {
            stack[k+1] = stack[k] + 1;
            k++;
        }
        else
        {
            stack[k-1]++;
            k--;
        }
        if (k==0)
            break;
        printSet(stack,k);
    }
}
int main()
{
    int sum,n,m,i;

    while(scanf("%d%d",&sum2,&n)==2)
    {
        if(sum2==0&&n==0)
            break;
        for(i=1; i<=n; i++)
            scanf("%d",&ar[i]);
        printf("Sums of %d:\n",sum2);
        printPowerset(n);
        if(ck==0)
            printf("NONE\n");
        ck=0;
        mp.clear();
    }
    return 0;
}


