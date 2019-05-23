#include<iostream>
using namespace std;
int last(int N)
{
    int i,j,ans=1,a2=0,a5=0,a;
    for (i = 1; i <= N; i++)
    {
        j = i;
        while (j%2==0)
        {
            j /= 2;
            a2++;
        }
        while (j%5==0)
        {
            j/=5;
            a5++;
        }
        ans = (ans*(j%10))%10;
    }
    a=a2-a5;
    for (i = 1; i <= a; i++)
        ans=(ans * 2) %10;
    return ans;
}
int main()
{
    int n ,i,j,sum,n1,cnt;
    while(cin>>n)
    {
        cnt=0;
        n1=n;
        while(n1>0)
        {
            n1/=10;
            cnt++;
        }
        for(j=cnt; j<5; j++)
            cout<<" ";
        cout<<n<<" -> ";
        cout<<last(n)<<endl;
    }
}

