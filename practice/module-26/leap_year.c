#include<stdio.h>

int leap(int year){
    if((year%400==0) || ((year%4==0) && (year%100!= 0))){
        return 1;
       }
        return 0;
}

int degit_count(int n){

    int count_degit[5] = {0,0,0,0,0};
    while(n>0){
        int lp = (n%10);
        count_degit[lp]++;
        n = n/10;
    }

    for(int i = 0; i<5; i++){
      if(count_degit[i]>1){
        return 0;
        break;
      }
    }
    return 1;

}
int main()
{
    if((leap(2400)== 1) && (degit_count(233467)==1))
        printf("butiful number");
    else
    printf("not");
}
