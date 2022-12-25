#include<stdio.h>
struct Student{
    int roll;
    float number;
};

int main(){

    struct Student s[10];

    for(int i = 1; i<10; i++){
        s[i].roll = 20 + i;
        s[i].number = 20.4*i*3;
    }

    for(int i = 1; i<10; i++){
        printf("%d %lf\n",s[i].roll,s[i].number);
    }

    return 0;
}

