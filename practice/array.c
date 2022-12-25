#include<stdio.h>
int main()
{
    int arr[5];
    int i,sum = 0;
    for(i = 0; i<5; i++){
        scanf("%d",&arr[i]);
         sum = sum + arr[i];
    }
    printf("%d\n",sum);
    for(i = 0; i<5; i++){
        printf("%d ",arr[i]);
    }
}
