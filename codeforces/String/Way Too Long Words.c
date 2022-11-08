#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i = 0; i<n; i++)
    {
        char ch[100];
        fgets(ch,sizeof(ch),stdin);
        int l = strlen(ch) - 1;
        if(l>10)
        {
            printf("%c%d%c",ch[0],l - 2,ch[l - 1]);
        }
        else
        {
            puts(ch);
        }
    }
    return 0;
}



