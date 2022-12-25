#include<stdio.h>
#include<limits.h>

int main()
{
    int i,j,size;
    scanf("%d",&size);
    int arr[size];
    for(i = 0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    for(i = 0, j = size - 1; i<size/2; i++, j--){
       int temp = arr[i];
       arr[i] = arr[j];
       arr[j] = temp;
    }

    for(i = 0; i<size; i++){
        printf("%d ",arr[i]);
    }


}
