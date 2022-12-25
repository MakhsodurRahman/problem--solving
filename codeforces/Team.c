#include<stdio.h>
int main()
{
    int n,i,a,j,solved =0;
    scanf("%d",&n);
    for(i = 0; i<n; i++){
        int sum = 0;
        for(j = 0; j<3; j++){
            scanf("%d",&a);
            sum += a;
        }
        if(sum>=2){
            solved++;
        }
    }
    printf("%d\n",solved);
}

