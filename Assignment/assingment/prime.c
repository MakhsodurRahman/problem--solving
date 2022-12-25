#include<stdio.h>
double avg_p(int ar[],int n){
    int sum = 0;
    int count = 0;
    for(int i = 0; i<n; i++){
        if(ar[i]%2==0){
            sum+=ar[i];
            count++;
        }
    }
    return sum/count;
}
int prime_m(int ar[],int n){
    int i,j;
    int sum = 0;
    int count = 0;
    for(i=0;i<n;i++)
     {
           int counter=0;
           for(j=2;j<ar[i];j++)
           {
                 if(ar[i]%j==0)
                 {
                       counter=1;
                       break;
                 }
           }
           if(counter==0)
           {

               count++;

           }
     }


     return count;
}


void main()
{
     int ar[100],i,n;

     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
           scanf("%d",&ar[i]);
     }

    printf("Prime numbers: %d\n", prime_m(ar,n));
    printf("Average of all even integers:  %0.2lf",avg_p(ar,n));



}
