#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i = 1; i<=n; i++){
        scanf("%d",&arr[i]);
    }
    int even_count = 0;
    int odd_count = 0;
    for(int i = 1; i<=n; i++){
       if((i%2==0) && (arr[i]%2==0)){
            int x = i + arr[i];
            even_count +=(i+arr[i]);
       }
       else if((i%2!=0) && (arr[i]%2!=0)){
            odd_count +=(i+arr[i]);
       }
    }
    int sum = even_count+odd_count;
    printf("%d\n",sum);
    return 0;
}
