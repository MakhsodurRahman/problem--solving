#include<stdio.h>
int main()
{
    long long int n,i,j;
    scanf("%d",&n);
    long long int count = 0;
    for(i = 0; i<n; i++)
    {

        for(j = i + 1; j<n; j++)
        {
            count++;
        }

    }
    printf("%lld\n",count);
}
