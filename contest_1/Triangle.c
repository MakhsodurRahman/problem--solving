#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int number = (a+b+c)/3;
    int s = sqrt(a);
    if(number == a){
        printf("yes");
    }
    else{
        printf("no");
    }

    return 0;
}

