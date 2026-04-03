#include<stdio.h>
struct point1
{
    int x,y;
};
union point2
{
    int x,y;
};
main()
{
    struct point1 p1={2,3};
    union point2 p2={5,7};
    printf("%d %d \n", p1.x,p1.y);
    printf("%d %d \n", p2.x,p2.y);
    return 0;
}