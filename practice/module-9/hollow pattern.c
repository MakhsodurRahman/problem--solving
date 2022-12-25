#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i = 1; i<=n;i++){
        printf("%d",i);
    }
    printf("\n");
    for(i = 2; i<=(n - 1); i++){

        printf("%d",i);
        for(j = 1; j<=(n - 2); j++){
            printf(" ");
        }
        printf("%d\n",n);
    }
    for(i = 1; i<=n;i++){
        printf("%d",n);
    }
}
