#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,n,j;
    scanf("%d",&t);


    int count = 0;
    for(i = 0; i<t; i++)
    {
        scanf("%d",&n);
        char arr[n];
        scanf("%s",arr);

        for(j = 0; arr[i]!='\n'; j++){
            if((arr[j]+arr[j+1]) =="10"){
                printf("hello");
            }
        }


    }


    return 0;
}
