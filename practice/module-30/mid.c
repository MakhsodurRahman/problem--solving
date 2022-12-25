#include<stdio.h>

struct Point{
    float x,y;
};

struct Point mid(struct Point p, struct Point q){

    struct Point t;
    t.x = (p.x + q.x)/2;
    t.y = (p.y + q.y)/2;
    return t;
}
int main()
{
    struct Point p = {1,1};
    struct Point q = {4,5};

    struct Point t;
    t = mid(p,q);
    printf("%f %f",t.x,t.y);
}

