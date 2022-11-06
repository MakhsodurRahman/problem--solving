#include<stdio.h>
int main()
{
    int n,i;

    scanf("%d",&n);
    int arr[55];
    for(i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
     int move = 0;
    for(i = 1; i<n; i++){
        if(arr[i]<arr[i - 1]){
            move += (arr[i - 1] - arr[i]);
            arr[i] = arr[i - 1];
        }
    }
    printf("%d\n",move);
}




