#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    int arr[n];
    int s_arr[n];
    for(i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }


    for(j = 0; j<n; j++)
    {
        int min = arr[0];
        int m_ind= 0;
        for(i = 1; i<n; i++)
        {
            if(arr[i]<min)
            {
                min = arr[i];
                m_ind = i;
            }
        }
        s_arr[j] = min;
        arr[m_ind] = 9999;
    }
    for(i = 0; i<n; i++)
    {
        printf("%d  ",s_arr[i]);
    }
}
