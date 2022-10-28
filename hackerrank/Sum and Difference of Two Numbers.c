#include<stdio.h>
int main()
{
    int a, b;
    float c, d;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    float sum = c + d;
    float sub = c - d;
    printf("%d %d\n",(a + b), (a -b));
    printf("%0.1f %0.1f\n",sum, sub);
    return 0;
}
