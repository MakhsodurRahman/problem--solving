#include<stdio.h>

struct Point{
    int x,y;
};

int manhaten(struct Point p, struct Point q){

    return abs(p.x - q.x) + abs(p.y - q.y);
}
int main()
{
    struct Point p = {1,1};
    struct Point q = {4,5};
    printf("%d",manhaten(p,q));
}
