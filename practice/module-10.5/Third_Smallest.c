#include<stdio.h>
int main()
{
    int n,i,k;
    scanf("%d",&n);
    int input[n];
    for(i = 0; i<n; i++){
        scanf("%d",&input[i]);
    }
    scanf("%d",&k);
    int largest = input[0];
    for(i = 1; i<n; i++){
        if(input[i]>largest){
            largest = input[i];
        }
    }

    int arr[largest + 1];

    for(i=0; i<=largest; i+=1)
    {
        arr[i]=0;
    }

    for(i=0; i<n; i+=1)
    {
        arr[input[i]]+=1;
    }

    int cnt=0;
    for(i=largest; i>=1; i-=1)
    {
        if(arr[i]==1)
        {
            cnt++;
        }
        if(cnt==k)
        {
            printf("%drd largest element is %d\n",k,i);
            break;
        }
    }
}

