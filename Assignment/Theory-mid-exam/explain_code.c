#include<stdio.h>
int main()
{
    char a[10];
    int i;
		char ch = 'a';
		for(i = 0; i<8;i++)
		{
			a[i] = ch+8-i;
		}
		a[8] = '\0';

		for(i = 0; i<8; i++){
        printf("%c",a[i]);
	}
}






