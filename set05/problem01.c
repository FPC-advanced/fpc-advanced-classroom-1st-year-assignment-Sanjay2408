#include <stdio.h>
#include <math.h>
struct _point
{
  float x;
  float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);
int main()
{
  Point a, b;
  float res;
  a = input();
  b = input();
  dist(a, b, &res);
  output(a, b, res);
  return 0;
}
Point input()
{
  Point P;
  printf("Enter the coordinates of (x,y):");
  scanf("%f  %f", &P.x, &P.y);
  return P;
}
void dist(Point a, Point b, float *res)
{
  *res = sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}
void output(Point a, Point b, float res)
{
  printf("The distance between (%0.1f,%0.1f) and (%0.1f,%0.1f) is %0.1f\n", a.x, a.y, b.x, b.y, res);
}
