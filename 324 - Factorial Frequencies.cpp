#include<stdio.h>
#include<iostream>
#include<vector>
#define mx 100001
#include<algorithm>
using namespace std;
vector<int>v2[mx];
int ar[10000];
void fac()
{
    int t,l;
    int a[mx];
    int n,i,j,temp,m,x;
    a[0]=1;
    m=1;
    temp = 0;
    for(i=1; i<=400; i++)
    {
        for(j=0; j<m; j++)
        {
            x = a[j]*i+temp;
            a[j]=x%10;
            l=a[j];
            v2[i].push_back(l);
            temp = x/10;
        }
        while(temp>0)
        {
            a[m]=temp%10;
            l=a[m];
            v2[i].push_back(l);
            temp = temp/10;
            m++;
        }
    }
}
int main()
{
    fac();
    int n,i,j,k,s,o,t,th,f,fi,si,se,e,ni,z;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        else
        {
            cout<<n<<"! --"<<endl;
            s=v2[n].size();
            for(i=s-1; i>=0; i--)
            {
                k=v2[n][i];
                ar[k]++;
            }
        }
        printf("   (0)%5d    (1)%5d    (2)%5d    (3)%5d    (4)%5d\n",ar[0],ar[1],ar[2],ar[3],ar[4]);
        printf("   (5)%5d    (6)%5d    (7)%5d    (8)%5d    (9)%5d\n",ar[5],ar[6],ar[7],ar[8],ar[9]);
        for(i=0; i<10; i++)
        {
            ar[i]=0;
        }
    }
    return 0;
}


