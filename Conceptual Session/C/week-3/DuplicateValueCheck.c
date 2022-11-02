#include<stdio.h>
int main()
{
    int n,i,j,p;
    scanf("%d",&n);
    int input[n];
    for(i = 0; i<n; i++){
        scanf("%d",&input[i]);
    }
    int largest = input[0];
    for(j = 1; j<n; j++){
        if(input[j]>largest){
            largest = input[j];
        }
    }

    int arr[largest + 1];
    for(i = 0; i<=largest; i++){
        arr[i] = 0;
    }
    for(i = 0; i<=n; i++){
        arr[input[i]] += 1;
    }
    int duplicate = 0;
    int unique = 0;
    for(i = 1; i<=largest; i++){

        if(arr[i] > 1){
                printf("duplicate value is : %d\n",i);
            duplicate++;
        }
        else if(arr[i] == 1){
            printf("unique value : ",i);
            unique++;
        }
    }

    printf("total duplicate is %d \n total unique is : %d",duplicate,unique);

}
