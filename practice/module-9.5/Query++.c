#include<stdio.h>
int main()
{
    int n,i;
    printf("enter n : ");
    scanf("%d",&n);
    int arr[10];
    printf("enter your number : ");
    for(i = 1; i<=n; i++){
        scanf("%d",&arr[i]);
    }
    int index,value,t;
    printf("enter your v : ");
    scanf("%d",&t);
    printf("enter your index value : ");
    for(i = 1; i<=t; i++){
        scanf("%d",&index);
        scanf("%d",&value);
        arr[index] += value;
    }

    for(i = 1; i<=n; i++){
        printf("%d  ",arr[i]);
    }
}

