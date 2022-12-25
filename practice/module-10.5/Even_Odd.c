#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int even = 0;
    int odd = 0;
    for(i = 0; i<n; i++){
        if(arr[i] %2 !=0){
            even = even + arr[i];
        }
    }
    if(even%2 == 0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}
