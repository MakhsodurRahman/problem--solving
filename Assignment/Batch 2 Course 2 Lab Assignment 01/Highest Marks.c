#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i = 0; i<n; i++ )
    {
       scanf("%d",&arr[i]);
    }
    int largest = arr[0];
    for(i = 1; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    int marks[100];
    for(i = 0; i<n; i++){
        marks[i] = largest - arr[i];
    }
    for(i = 0; i<n; i++){
        printf("%d ",marks[i]);
    }

    return 0;
}

