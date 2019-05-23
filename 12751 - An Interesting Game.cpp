#include<stdio.h>
int main()
{
    int n,x,k,sum,num,sum2,sum3,t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&n,&k,&x);
        sum=(n*(n+1))/2;
        num=k+x-1;
        sum2=(num*(num+1))/2;
        x=x-1;
        sum3=(x*(x+1))/2;
        //  printf("%d %d %d\n",sum,sum2,sum3);
        printf("Case %d: %d\n",cs++,sum-sum2+sum3);
    }
}

