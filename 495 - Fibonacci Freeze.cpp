#include<cstdio>
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
#define MAX 5001
typedef long long ll;
string str2d[50000];
void fibo()
{
    string  str1,str2,str3,str4,str5,str6;
    int i,j,k,ck,n1,n2,n3,n,w,r,sum,t,sum1,cn,tes,si;
    str1="0";
    str2="1";
    str2d[0]="0";
    str2d[1]="1";
    for(tes=2; tes <=5001; tes ++)
    {
        n1=str1.size();
        n2=str2.size();
        w=0;
        r=0;
        if(n1>n2)
        {
            n=n1-n2;
            for(i=0; i<n; i++)
            {
                str3+='0';
            }
            str3=str3+str2;
            str2=str3;
        }
        else
        {
            n=n2-n1;
            for(i=0; i<n; i++)
            {
                str3+='0';
            }
            str3=str3+str1;
            str1=str3;
        }
        n3=str1.size();
        t=0;
        w=0;
        for(i=n3-1; i>=0; i--)
        {
            sum=(str1[i]-'0'+str2[i]-'0')+t;
            sum1=sum;
            if(i==0&&sum>9)
            {
                str4+=sum1%10+'0';
                str4+=sum/10+'0';
            }
            else
            {
                str4+=sum1%10+'0';
            }
            t=sum/10;
        }
        n1=str4.size();
        ck=0;
        cn=0;
        for(i=n1-1; i>=0; i--)
        {
            if(ck==0)
            {
                if(str4[i]=='0')
                {
                    cn++;
                }
                else
                {
                    str5+=str4[i];
                    ck=1;
                }
            }
            else
            {
                str5+=str4[i];
            }
        }
        str2d[tes]=str5;
        str3=str4="";
        str1=str2;
        str2=str5;
        str5="";
    }
}
int main()
{
    fibo();
    int i,j,k,n;
    while(scanf("%d",&n)==1)
    {
        printf("The Fibonacci number for %d is ",n);
        cout<<str2d[n]<<endl;
    }
    return 0;
}

