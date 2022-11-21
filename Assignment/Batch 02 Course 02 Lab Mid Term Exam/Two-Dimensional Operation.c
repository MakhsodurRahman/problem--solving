#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N,M,i,j;
    scanf("%d %d",&N,&M);
    int arr[N][M];
    for(i = 0; i<N; i++){
        for(j = 0; j<M; j++){
            scanf("%d",&arr[i][j]);
        }
    }



    for(i = 0; i<N; i++){
        for(j = 0; j<M; j++){
            if((arr[i][j]) == (i==j)){
                arr[i][j] += 3;
            }

        }

    }







    for(i = 0; i<N; i++){
        for(j = 0; j<M; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}


