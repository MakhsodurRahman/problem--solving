#include<stdio.h>
#include<math.h>
int main()
{
    int i,j;
    int arr1[2][2];
    int arr2[2][2];
    int arr3[2][2];
    for(i = 0; i<2; i++){
        for(j = 0; j<2; j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    for(i = 0; i<2; i++){
        for(j = 0; j<2; j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    for(i = 0; i<2; i++){
        for(j = 0; j<2; j++){
          arr3[i][j] += abs(arr1[i][j]- arr2[i][j]);
        }

    }

    for(i = 0; i<2; i++){
        for(j = 0; j<2; j++){
           printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }

}

