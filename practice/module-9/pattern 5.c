#include<stdio.h>
int main()
{
    int n,row,col;
    scanf("%d",&n);
    for(row = 1; row<=n; row++){
        for(col = 1; col<=row-1; col++){
            printf("%c",col+64);
        }
        for(col = n; col>=row; col--){
            printf("*");
        }

        printf("\n");
    }
}


