#include<stdio.h>
int main()
{
    int n,h,i,j,sum = 0;
    scanf("%d %d",&n,&h);
    for(i = 1; i<=n; i++){
        scanf("%d",&j);
        /*
        sum = sum + 1;
        scanf("%d",&j);

        if(j>h){
            sum = sum + 1;
        }
    */
        if(j>h){
            sum += 2;
        }
        else{
            sum++;
        }
}
    printf("%d",sum);

}
