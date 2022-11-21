#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,i,sum = 0;
    char s[20];
    scanf("%s",s);
    scanf("%d %d",&a,&b);
    int l = strlen(s);
    if(!(a<0 || a>50) || (b<0 || b>50))
    {
        for(i = 0; i<l; i++)
        {
            if(s[i] == '+')
            {
                sum += a + b;
            }
            else if(s[i] =='*')
            {
                sum += a*b;
            }
        }
         printf("%d\n",sum);
    }
    return 0;
}

