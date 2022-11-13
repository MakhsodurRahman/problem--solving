#include<stdio.h>
int main()
{
    int i,n=1;
    int arr[15];
    arr[0]=1;
    for(i = 1; i<15; i++)
    {
        arr[i]=n*2;
        n=arr[i];

    }
    for(i = 0; i<15; i++)
    {
        printf("%d ", arr[i]);

    }
    return 0;
}
