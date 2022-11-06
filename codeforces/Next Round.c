#include<stdio.h>
int main()
{
    int n,k,i;
    int count = 0;
    scanf("%d %d",&n,&k);
    int arr[55];
    for(i = 1; i<=n; i++){
        scanf("%d",&arr[i]);
    }
    for(i = 1; i<=n; i++){
        if(arr[i]>=arr[k] && arr[i]>0){
            count++;
        }

    }
    printf("%d\n",count);
}



