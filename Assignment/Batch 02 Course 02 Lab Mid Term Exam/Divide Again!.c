#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    long long int n,v;
    scanf("%lld",&n);
    if(!(n<0))
    {
        if(n%2==0 && n%3==0)
        {
            v = n/3;
            printf("%d\n",v);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
