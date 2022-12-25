#include<stdio.h>
main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("Largest = %d",a);
            }
            else
            {
                printf("Largest = %d",d);
            }
        }
    }
    else if(b>c)
        {
            if(b>d)
                {
                    printf("Largest = %d",b);
                }
            else
                {
                    printf("Largest = %d",d);
                }
        }
        else if(c>d)
            {
               printf("Largest = %d",c);
            }
        else
        {
            printf("Largest = %d",d);
        }
}
