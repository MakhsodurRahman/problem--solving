#include<stdio.h>
int main()
{
    int i,n,j,v,temp;
    scanf("%d",&n);
    scanf("%d",&v);
    int arr[v];
    int s_arr[n];
    for(i = 0; i<v; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i = 0; i<n; i++)
    {
        if(arr[i]>arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }

    }
    for(i = 0; i<v; i++)
    {
        printf("%d  ",arr[i]);
    }
}

