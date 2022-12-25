#include<stdio.h>
int main()
{
    int n,i,temp = 0;
    scanf("%d",&n);
    for(i = 2; i<n; i++){
        if(n%i== 0 && i!=2){
            printf("%d is not prime \n",i);
        }

    }


}


