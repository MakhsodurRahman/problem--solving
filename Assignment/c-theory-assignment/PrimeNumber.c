#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    int arr[t];
    for(i = 0; i<t; i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp = 0;
    for(int j = 0; j<t; j++)
    {

        for(i = 2; i<=t; i++)
        {
            if(arr[j]%i==0)
            {
                temp = 1;
                break;
            }
        }
        if(temp == 0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

}

