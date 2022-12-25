#include<stdio.h>
int is_vowel(char c){
    if(c =='a'|| c == 'e' || c == 'i'){
        return 1;
    }
}
int main()
{
    char c;
    c = getchar();

    if(is_vowel(c) == 1){
        printf("vowel");
    }
    else
        printf("consonent");
}
