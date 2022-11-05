#include<stdio.h>
int main()
{
    int n,i,value =0,new_value =0;
    char c;
    scanf("%d",&n);
    int arr[n];
    for(i = 0; i<n; i++){
        scanf("%d%c",&arr[i],&c);
    }
    for(i = 0; i<n; i++){
        if(arr[i]<=60)
        {
            value = 60 - arr[i];
            printf("%d minutes\n",(value + 40 + 60));
        }
        else if(arr[i]>60 && arr[i]<=80)
        {
            value = 80 - arr[i];
            new_value = value * 2;
            printf("%d minutes\n",(60 + new_value));

        }
        else if(arr[i]>80 && arr[i]<=100)
        {
            value = 100 - arr[i];
            new_value = value * 3;
            printf("%d minutes\n",new_value);

        }
    }


    return 0;
}


