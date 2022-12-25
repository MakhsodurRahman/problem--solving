#include<stdio.h>
int main()
{
    int arr[] = {4,2,4,33,44};

    int* p = &arr;
    for(int i = 0; i<5; i++){
        printf("%d ",*p);
        p++;
    }
}
