#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d %d",&n,&m);
    int gcd;
    for(i = n;i>=1; i--){
        if(n%i == 0 && m%i==0){
            gcd = i;
            break;
        }
    }
    printf("%d",gcd);
}
