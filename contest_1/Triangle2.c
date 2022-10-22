#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int A,B,C;
    scanf("%d%d%d", &A, &B, &C);
    if(0!=A && A <= 100 && 0!=B && B <= 100 && 0!=C && C <= 100)
    {
        if(A==B && B==C)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    else
        {
            printf("No\n");
        }
    return 0;
}
