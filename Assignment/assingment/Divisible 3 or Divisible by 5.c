#include<stdio.h>
int div_3(int arr[],int size){
    int count = 0;
    for(int i = 1; i<=size; i++){

        if(arr[i]%3==0){
            count++;
        }
    }
    return count;
}

int div_5(int arr[],int size){
    int count = 0;
    for(int i = 1; i<=size; i++){

        if(arr[i]%5==0){
            count++;
        }
    }
    return count;
}

int div_5_3(int arr[],int size){
    int count = 0;
    for(int i = 1; i<=size; i++){

        if(arr[i]%5==0 && arr[i]%3==0){
            count++;
        }
    }
    return count;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[100];
    for(i = 1; i<=n; i++){
        scanf("%d",&arr[i]);
    }


    int d = (div_3(arr,n) + div_5(arr,n)) - div_5_3(arr,n);
    if(d>0){
        printf("%d\n",d);
    }
    else{
        printf("-1\n");
    }
    return 0;
}

