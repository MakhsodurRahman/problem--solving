#include<stdio.h>
int main()
{
    int number,b_number;
    scanf("%d%d",&number,&b_number);

    int totalNumber = number + b_number;
    if(totalNumber>=100){
        printf("yes");
    }
    else{
        printf("no");
    }
}
