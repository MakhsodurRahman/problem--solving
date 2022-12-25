#include<stdio.h>
#include<string.h>
int main()
{
    char c[10][10],temp[10];
    int i,j;
    for(i = 0; i<3; i++)
    {
        fgets(c[i],sizeof(c),stdin);
    }

    for(i  = 1; i<3; i++)
    {
        for(j = 0; j<3 - 1; j++)
        {
            if(strcmp(c[j],c[j+1])>0)
            {
                strcpy(temp,c[j]);
                strcpy(c[j],c[j+1]);
                strcpy(c[j +1],temp);
            }
        }
    }
    for(i = 0; i<3; i++)
    {
        printf("%s",c[i]);
    }
}
