#include<stdio.h>
struct Student{
    int roll;
    float number;
    char name[10];
};

int main(){

    struct Student s2 = {12,5.4,"hello"};
    struct Student s1 = {.name = "hi",.roll=44,.number = 4.3}; //designated initialization

    printf("%d %lf %s",s1.roll,s1.number,s1.name);

    return 0;
}
