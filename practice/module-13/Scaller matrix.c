#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d%d",&row,&col);
    int arr[row][col];
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    if(row == col)
    {

        int ans = 1;

        for(int i = 0; i<row; i++)
        {
            for(int j = 0; j<col; j++)
            {
                int value = arr[0][0];
                if(i == j)
                {
                    if(value != arr[i][j])
                    {
                        ans = 0;

                    }
                }

            }
            if(ans == 1)
            {
                printf("diagonal\n");
            }
            else
            {
                printf("not diagonal\n");
            }
        }
    }
    else
    {
        printf("not diagonal\n");
    }
}
