#include<stdio.h>

int main()
{
    int first, second, third, fourth;
    scanf("%d %d %d %d", &first, &second, &third, &fourth);

    if((first>second) && (first>third) && (first>fourth))
        printf("Largest = %d\n",first);
    else if((second>first) && (second>third) && (second>fourth))
        printf("Largest = %d\n",second);
    else if((third>second) && (third>first) && (third>fourth))
        printf("Largest = %d\n",third);
    else if((fourth>second) && (fourth>third) && (fourth>first))
        printf("Largest = %d\n",fourth);

    if((first<second) && (first<third) && (first<fourth))
        printf("Smallest = %d\n",first);
    else if((second<first) && (second<third) && (second<fourth))
        printf("Smallest = %d\n",second);
    else if((third<second) && (third<first) && (third<fourth))
        printf("Smallest = %d\n",third);
    else if((fourth<second) && (fourth<third) && (fourth<first))
        printf("Smallest = %d\n",fourth);

    return 0;
}
