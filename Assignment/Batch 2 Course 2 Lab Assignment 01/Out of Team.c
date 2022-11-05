#include<stdio.h>
int main()
{
    int i,x,t;
    scanf("%d %d",&t,&x);
    int arr[t];
    for(i = 0; i<t; i++ )
    {
      scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(i = 0; i<t; i++){
        if(arr[i]<x){
            sum++;
        }
    }
    printf("%d\n",sum);



}


