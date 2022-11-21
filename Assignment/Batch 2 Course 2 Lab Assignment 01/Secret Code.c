#include<stdio.h>
#include<math.h>
int main()
{

    int number, i, isPrime=1;
    printf("Enter the number to check for prime : ");
    scanf("%d",&number);
    if(number<=1 || number==3) isPrime=0;
    else
    {
        for(i=2; i<sqrt(number); i++)
        {
            if(number % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }
    if(isPrime == 1) printf("%d is a prime number",number);
    else printf("%d is not a prime number",number);
    return 0;
}
