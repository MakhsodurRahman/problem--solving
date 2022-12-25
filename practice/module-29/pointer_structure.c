#include<stdio.h>
struct Student{
    double number;
    int roll;

};

int main(){

    struct Student s = {4.3,44};
    struct Student* sp;
    sp = &s;

    printf("%lf %d",sp->number,sp->roll);



    return 0;
}


