#include<stdio.h>
int main()
{
    int n,i,j,p;
    scanf("%d %d",&n,&p);
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
    int count = 0;
    for(i = 0; i<=largest; i++){

        if(arr[i] == 1){
            count++;
        }
        if(count == p){
            printf("3rd minimum value is : %d",i);
            break;
        }
    }

}
