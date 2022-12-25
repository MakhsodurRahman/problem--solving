#include<stdio.h>
int main()
{
     long long int n,i,x;
    long long int arr[200001];
    scanf("%d",&n);
    for(i = 1; i<=n; i++){
        scanf("%d",&x);
        arr[x] = 1;
    }
    for(i = 1; i<=n; i++){
        if(arr[i]==0){
            printf("%d ",i);

        }
    }
}
