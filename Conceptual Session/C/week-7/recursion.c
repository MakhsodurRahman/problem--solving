#include<stdio.h>
void print(int n){
    if(n>0)
    printf("%d ",n);
    print(n-1);
}
int main()
{

    print(4);
}
