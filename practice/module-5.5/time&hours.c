#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d %d",&n,&m);

    if(n<m){
        for(i = n; i<=m; i++){
            printf("%d ",i);
        }
    }
    else if(n>m){
         while(n!=m){
            printf("%d ",n);
            if(n == 23){
                n = 0;
            }
            else{
                n++;
            }

         }
         printf("%d",n);
    }
    else{
        printf("number wrong....");
    }

}




