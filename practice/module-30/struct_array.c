#include<stdio.h>

struct Student{
    int roll;
    char name[50];
    double marks;
};

void print(int i,struct Student s){

    printf("%d\n",s.roll);
        printf("%s\n",s.name);
        printf("%lf\n",s.marks);
}
int main()
{
    struct Student cls[5];

    for(int i = 0; i<2; i++){
        scanf("%d",&cls[i].roll);
        scanf("%s",&cls[i].name);
        scanf("%lf",&cls[i].marks);
    }

    for(int i = 0; i<2; i++){
        print(i,cls[i]);
    }
}


