#include<stdio.h>
#include<iostream>
#include<vector>
#define mx 100001
#include<algorithm>
using namespace std;
vector<int>v2[mx];
string str[mx];
string s;
void fac()
{
    int t,l;
    int a[mx];
    int n,i,j,temp,m,x;
    a[0]=1;
    m=1;
    temp = 0;
    for(i=1; i<=1003; i++)
    {
        for(j=0; j<m; j++)
        {
            x = a[j]*i+temp;
            a[j]=x%10;
            l=a[j];
            s+=l+'0';
            temp = x/10;
        }
        while(temp>0)
        {
            a[m]=temp%10;
            l=a[m];
            s+=l+'0';
            temp = temp/10;
            m++;
        }
        str[i]=s;
        s="";

    }
}
int main()
{
    fac();
    int n,i,j;
    string s;
    while(cin>>n)
    {
        cout<<n<<"!\n";
        if(n==0)
            cout<<"1";
        else
        {
            s=str[n];
            reverse(s.begin(),s.end());
            cout<<s;
        }
        cout<<endl;
    }
    return 0;
}
