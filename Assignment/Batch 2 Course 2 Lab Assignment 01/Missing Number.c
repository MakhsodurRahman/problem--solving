#include<stdio.h>
int main()
{
    unsigned long long  n,a,b,c;
    int t,j;
    scanf("%d",&t);
    for(j = 0; j<t; j++ )
    {
       scanf("%llu %llu %llu %llu",&n,&a,&b,&c);
        printf("%d\n",n - (a + b + c));
    }
    return 0;
}
