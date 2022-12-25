#include<stdio.h>
int main()
{
    int arr[5];
    int i;

    for(i = 0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    int largest = arr[0];
    int value = 0;
    for(i = 1; i<5; i++){
        if(arr[i]>largest){
            largest = arr[i];

        }
    }
    printf("boro value : %d",largest);
}
