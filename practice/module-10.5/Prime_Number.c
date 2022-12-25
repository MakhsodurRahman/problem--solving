#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i = 0; i<n; i++){
        int count=0;
        for(j = 2; j<n; j++){
            if(arr[i] % j == 0){
                count++;
                continue;
            }

         }
         if(count == 1){
            printf("%d  ",arr[i]);
        }

    }
}
