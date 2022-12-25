#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int largest = arr[0];
    for(i = 1; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    int input[largest + 1];
    for(i = 0; i<=largest; i++){
        input[i] = 0;
    }
    for(i = 0; i<n; i++){
        input[arr[i]] +=1;
    }

    for(i = 0; i<=largest; i++){
       if(input[i] == 1){
        printf(" %d ",i);
       }
    }
}

