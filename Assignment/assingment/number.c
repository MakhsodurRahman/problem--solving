#include<stdio.h>
int main()
{
    int n,sum=0,sub=0,total=0,count=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        if(3>=i)
        {
            sum+=i;
            count=i/3;
        }

        else if(count%2==1)
        {
            sub+=i;
            count=i/3;
        }

        else if(count%2==0)
        {
            sum+=i;
            count=i/3;
        }
        else
            printf("");
    }
    total=sum-sub;
    printf("%d\n", total);
    return 0;
}
