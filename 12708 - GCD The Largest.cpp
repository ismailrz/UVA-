#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<cctype>
#include<vector>
#define mx 100001
#include<algorithm>
#define pi acos(-1)
typedef long long ll;
using namespace std;
vector<int>v2[mx];
int main()
{
    ll n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2)
            cout<<(n-1)/2;
        else
            cout<<n/2;
        cout<<endl;
    }
}

