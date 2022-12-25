#include<stdio.h>

int main()
{
    int i,j;
    int row = 8;
    int col = 7;
    int arr[row][col];
    for(i = 0; i<row; i++){
        for(j = 0; j<col; j++){
            arr[i][j] = 0;
        }
    }
    int input;
    scanf("%d",&input);
    while(input--){
        int r,c;
        scanf("%d %d",&r,&c);
        arr[r][c] = 1;
    }


    for(i = 0; i<row; i++){
        int count = 0;
        for(j = 0; j<col; j++){
           if(arr[i][j] == 1){
              count++;
           }
        }
       if(count>1){
        for(j = 0; j<col; j++){
            arr[i][j] = 0;
        }
       }
    }


    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(arr[i][j] != 0){
                printf("%d %d\n",i,j);
            }
        }
    }

}
