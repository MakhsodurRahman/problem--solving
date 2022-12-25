#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[10];
    for(i = 1; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int value = arr[1];
    int count = 0;
    for(i = 1; i<n; i++){
        if(arr[i + 1] == value){
            count++;
        }
    }
    printf("count %d",count);
    if(count == n - 1){
        printf("yes");
    }
    else{
        printf("no");
    }
}

