#include <stdio.h>
#include <math.h><
struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);
int main()
{
    return 0;
}
Point input()
{
    Point a,b;
    printf("Enter two numbers:");
}