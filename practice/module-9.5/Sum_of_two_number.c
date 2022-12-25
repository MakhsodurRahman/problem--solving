#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int target,count = 0;
    scanf("%d",&target);
    for(i = 0; i<n; i++){
        if((arr[i] + arr[i + 1]) > target)
            {
                count++;
            }
    }
    if(count>0){
        printf("yes");
    }
    else{
        printf("no");
    }
}

