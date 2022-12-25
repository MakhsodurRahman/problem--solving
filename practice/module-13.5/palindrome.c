#include<stdio.h>
#include<string.h>
int main()
{

    int i,j;
    char c[10];
    char ch[10];
    scanf("%s %s",c,ch);
    int l = strlen(c);
   for(j = 0, i = l - 1; i>=0; i--,j++)
    {
        ch[j] = c[i];
    }
    ch[j] ='\0';


    /*j = l -1;
    for(i = 0; i<l; i++){
        ch[i] = c[j];
        j--;
    }*/

    int d = strcmp(c,ch);
    if(d == 0){
        printf("poly\n");
    }
    else{
        printf("not poly");
    }



}
