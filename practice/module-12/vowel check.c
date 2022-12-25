#include<stdio.h>
int main()
{
    char name[10];
    fgets(name,sizeof(name),stdin);
    int count = 0;
    int i =0;
    while(name[i] !='\0'){
        if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' ){
            count++;
        }
        i++;
    }
    printf("%d",count);
}

