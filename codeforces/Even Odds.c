#include<stdio.h>
int main()
{
    long long int n,k,i,output;
    long long int part = 0;
    scanf("%d %d",&n,&k);

     if(n%2==0)
    {
        part=n/2;
    }
    else
    {
        part=(n/2)+1;
    }

    if(k<=part)
        {
            output=(2*k)-1;
        }
    else
        {
            output=(k-part)*2;
        }
     printf("%llu",output);
}
