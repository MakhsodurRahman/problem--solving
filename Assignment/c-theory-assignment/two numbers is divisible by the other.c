#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    if(m%n==0){
        printf("The second number is divisible by the first number.\n");
    }
    else if(n%m==0){
         printf("The first number is divisible by the second number.\n");
    }
    else{
        printf("None of them are divisible by the other.\n");
    }
}
