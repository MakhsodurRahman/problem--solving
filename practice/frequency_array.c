#include<stdio.h>
#include<limits.h>

int main()
{
    int arr[7] = {4,2,4,4,6,7,5};

    int max = INT_MIN;
    for(int i = 0; i<7; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    int frequncy[max+1];

    for(int i = 0; i<=max; i++){
        frequncy[i] = 0;
    }
    for(int i = 0; i<7; i++){
       frequncy[arr[i]]++;
    }

    for(int i = 0; i<=max; i++){
        if(frequncy[i] != 0){
           for(int j = 1; j<=frequncy[i]; j++){
             printf("%d ",i);
           }

           // printf("%d ",i);
        }
    }
    printf("%d",max);
}
