#include<stdio.h>

struct Point{
    float x,y;
};
struct Triangle{
    struct Point A;
    struct Point B;
    struct Point C;
};
struct Point centroid(struct Triangle t){

    struct Point ans;
    ans.x = (t.A.x + t.B.x + t.C.x)/3;
    ans.y = (t.A.y + t.B.y + t.C.y)/3;

    return ans;

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
    struct Point r = {1,5};

    struct Triangle t = {p,q,r};
    struct Point c = centroid(t);
    printf("%f %f",c.x,c.y);
}


