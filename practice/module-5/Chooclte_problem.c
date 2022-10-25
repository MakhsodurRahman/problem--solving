#include<stdio.h>
int main()
{
    int chooclateNumber;
    printf("enter your chooclate number : ");
    scanf("%d",&chooclateNumber);
    int chooclate = chooclateNumber;
    int pack = chooclateNumber;

    while (pack>=4)
    {
        chooclate += pack/4;
        pack = (pack/4) + (pack % 4);

    }

    printf("chooclate is : %d",chooclate);
    
    
}