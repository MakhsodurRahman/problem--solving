#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,value;
    int sum = 0;
    scanf("%d", &n);
    while(n!=0){
         value = n%10;
         sum += value;
         n = n/10;

    }
    printf("%d",sum);
    return 0;
}
