#include<stdio.h>
int main()
{
    int num1, num2;
    scanf("%d%d",&num1,&num2);
    if(num1>num2){
        printf("num1 is begger");
    }
    else if(num1<num2){
        printf("num2 is begger");
    }
    else{
        printf("they are equel");
    }
}
