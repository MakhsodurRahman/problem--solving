#include<stdio.h>
int main()
{
    int i,n,j,temp;
    scanf("%d",&n);
    int arr[n];
    int s_arr[n];
    for(i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j = 0; j<n; j++)
    {
        for(i = 0; i<(n - 1); i++)
        {
            if(arr[i]>arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    for(i = 0; i<n; i++)
    {
        printf("%d  ",arr[i]);
    }
}

