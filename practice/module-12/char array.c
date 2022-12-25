#include<stdio.h>
int main()
{
    char name[10];
    fgets(name,sizeof(name),stdin);
    int count = 0;
    int i =0;
    while(name[i] !='\0'){
        count++;
        i++;
    }
    printf("%d",count);
}
