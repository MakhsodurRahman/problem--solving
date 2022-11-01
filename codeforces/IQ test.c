#include<stdio.h>
int main()
{
    int n,i,x;
    int ans = 0;
    scanf("%d",&n);
    int arr[n];
    for(i = 1; i<=n; i++){
        scanf("%d",&arr[i]);
    }
    int e_c=0;
    int o_c = 0;
    for(i = 1; i<=n; i++){
        if(arr[i]% 2 == 0){
           e_c++;
        }
        else{
          o_c++;
        }
    }
   if(e_c == 1){
    for(i = 1; i<=n; i++){
        if(arr[i] % 2 == 0){
            ans = i;
        }
    }
   }
   else{
        for(i = 1; i<=n; i++){
        if(arr[i] % 2 == 1){
            ans = i;
        }
    }
   }
   printf("%d ",ans);
}
