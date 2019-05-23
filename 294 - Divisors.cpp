#include<iostream>
#include<cstdio>
typedef long long int LL;
using namespace std;
LL k,cn;
int divi(LL num1,LL num2)
{
    LL i,j,di;
    for(i=num1; i<=num2; i++)
    {
        di=0;
        for(j=1; j*j<=i; j++)
        {
            if(j*j==i)
                di++;
            else if(i%j==0)
            {
                di+=2;
            }
        }
        if(cn<di)
        {
            cn=di;
            k=i;
        }
    }
}
int main()
{
    LL i,num1,num2,t;
    cin>>t;
    while(t--)
    {
        cin>>num1>>num2;
        cout<<"Between "<<num1<<" and "<<num2<<", ";
        divi(num1,num2);
        cout<<k<<" has a maximum of "<<cn<<" divisors."<<endl;
        k=cn=0;
    }
}
