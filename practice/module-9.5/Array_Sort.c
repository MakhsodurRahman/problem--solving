#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i = 1; i<=n; i++){
        scanf("%d",&arr[i]);
    }
    for(i = 1; i<=n; i++){
        for(j = 1; j<=n; j++){
            if(i == j){

            }
            else{
                printf("%d- %d",i,arr[j]);
            }
        }
        printf("\n");
    }
}
