#include<stdio.h>
void pattern(int n){
    for(int i = 0; i<n; i++){
        printf("#");
    }
    printf("\n");
}
int main()
{
    for(int i = 0; i<5; i++){
        pattern(i);
    }
}
