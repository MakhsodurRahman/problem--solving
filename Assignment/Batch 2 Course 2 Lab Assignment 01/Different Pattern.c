#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(j = 1; j<=n; j++ )
    {
       for(i = j; i>=1;i--){
         printf("%d ",i);
       }
       printf("\n");
    }

    return 0;
}

