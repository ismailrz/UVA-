#include<iostream>
using namespace std;
int bigm(long int num,long int pow,long int mod)
{
    if(pow==0)
        return 1;
    else if(pow%2)
    {
        long int p,q;
        p=num%mod;
        q=bigm(num,pow-1,mod)%mod;
        return (p*q)%mod;
    }
    else
    {
        long int c;
        c=bigm(num,pow/2, mod);
        return (c*c)%mod;
    }
}
int main()
{
    long int num,pow,mod,i;
    while(cin>>num>>pow>>mod)
    {
        cout<<bigm(num,pow,mod)<<endl;
    }
}

