#include<stdio.h>
void find_min_max(int n,int arr[],int *p,int *q){
    *p = arr[0];
    *q = arr[0];
    for(int i = 0; i<n; i++){
       if(arr[i]<*p){
        *p = arr[i];
       }
       if(arr[i]>*q){
        *q = arr[i];
       }
    }
    printf("\n");
}
int main()
{
    int arr[] = {5,4,6,7};

    int min,max;
    find_min_max(4,arr,&min,&max);
    printf("%d %d",min,max);
}

