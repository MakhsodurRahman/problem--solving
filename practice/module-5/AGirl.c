#include<stdio.h>
int main()
{
    long long int n,k;
    scanf("%lld %lld",&n,&k);
    for (int i = 1; i <=k; i++)
    {
        int lastDigit = n%10;
        if(lastDigit!=0){
            n--;
            
        }
        else{
            n = n/10;
        }
    }
    printf("the n is : %d",n);
    
    
}