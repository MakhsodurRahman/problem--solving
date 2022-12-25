#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char s[20],a;
    int i;
    fgets(s,sizeof(s),stdin);
    int sum = 0;
    for(i = 0; i<strlen(s)-1; i++){
        sum += +(s[i] - 96);
    }
    int count = 0,d = 0;
    for(i = 1; i<=strlen(s)-1; i++){
        if(pow(2, i) == sum){
                count++;
                d = i;
        }
    }
    if(count == 1){
         printf("yes\ncost = 2^%d",d);
    }
    else{
        printf("no");
    }





}

