#include<stdio.h>
int main()
{
    int n,i,temp = 0;
    scanf("%d",&n);
    if(n == 0 || n == 1){
        temp = 1;
    }
    for(i = 2; i<n; i++){
        if(n%i==0){
            temp = 1;
            break;
        }
    }
    if(temp == 0){
        printf("Prime\n");
    }
    else{
        printf("Composite\n");
    }

}

