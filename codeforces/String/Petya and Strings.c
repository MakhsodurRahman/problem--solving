#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s[102];
    char s2[102];
    fgets(s,sizeof(s),stdin);
    fgets(s2,sizeof(s2),stdin);
    for(i = 0; i<strlen(s) -1; i++){
        if(s[i]>='A' && s[i]<='Z'){
                s[i] += 32;
        }
        if(s2[i]>='A' && s2[i]<='Z'){
                s2[i] += 32;
        }
        if(s[i]>s2[i]){
            printf("1\n");
            return 0;
        }
        else if(s[i]<s2[i]){
            printf("-1\n");
            return 0;
        }
    }
    printf("0\n");
}
