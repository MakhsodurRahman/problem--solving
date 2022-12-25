#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i;
    fgets(s,sizeof(s),stdin);
    int isBinary = 0;
    for(i = 0; i<strlen(s) -1; i++){
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){
               isBinary = 1;
        }
    }
    if(isBinary == 0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

}
