#include<stdio.h>
int main()
{
    int arr[5];
    int i,sum = 0;
    for(i = 0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    int oddCount = 0, evenCount = 0;
    for(i = 0; i<5; i++){
        if(arr[i]%2==0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }
    printf("odd : %d  even : %d",oddCount,evenCount);
}
