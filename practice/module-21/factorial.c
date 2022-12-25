#include<stdio.h>

int fact(int n){
    int fact = 1;
    for(int i = 1;i<=n; i++){
        fact *= i;
    }
    return fact;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int f = fact(n);


    printf("%d",f);
}


