#include <stdio.h>
#include<string.h>
int main()
{
  char ch;
    char s[20];
    char sen[20];

    scanf("%c \n %s %[^\n]c", &ch, s, sen);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);
  return 0;
}
