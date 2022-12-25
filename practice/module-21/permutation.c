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
    int n,i,r;
    scanf("%d %d",&n,&r);
    int npr = fact(n) / fact(n-r);
    int ncr = fact(n)/fact(n-r)*fact(r);


    printf("%d\n",npr);
     printf("%d",ncr);
}



