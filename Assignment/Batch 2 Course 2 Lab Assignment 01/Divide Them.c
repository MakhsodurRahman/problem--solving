#include <stdio.h>

int main()
{
    int  i,t,k;
    scanf("%d", &t);
    int arr[t];
    for(i=0; i<t; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i = k; i<t; i++){
        printf("%d ",arr[i]);
    }
    for(i = 0; i<k; i++){
        printf("%d ",arr[i]);
    }


    return 0;
}
