#include<stdio.h>
int main()
{
    int n, value;
    int sum = 0;
    printf("enter number : ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        scanf("%d",&value);
        sum = sum + value;
    }
    printf("%d",sum);
    
}