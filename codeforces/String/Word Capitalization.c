#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
    char c[1000];
    scanf("%s",c);
    printf("%c%s\n", toupper(c[0]), c + 1);
}
