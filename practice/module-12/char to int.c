#include<stdio.h>
int main()
{
    char ch[100];
    fgets(ch,sizeof(ch),stdin);
    for(int i = 0; ch[i] !='\0'; i++){
        if(ch[i]>='a' && ch[i]<='z')
            ch[i] -= 32;
    }
    puts(ch);
}


