#include<stdio.h>
#include<math.h>
typedef struct point
{
 float x, y;
} Point;
typedef struct line 
{
 Point p1, p2;
 float distance;
} Line;
Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);
int main()
{
 Point p;
 Line l;
 
 l=input_line();
 find_length(&l);
 output(l);
 return 0;
}
Point input_point()
{
 Point p1,p2;
 scanf("%f %f",p1.x,p1.y);
 scanf("%f %f",p2.x,p2.y);
}
Line input_line()
{
  Line l;
  l.p1=input_point();
  l.p2=input_point();
  find_length(&l);
  output(l);
  return l;
}
void find_length(Line *l)
{
 float distance;
 distance=sqrt((l->p2.x - l->p1.x)*(l->p2.x - l->p1.x) + (l->p2.y - l->p1.y)*(l->p2.y-l->p1.y));
}
void output(Line l)
{
 printf("The distance between the points (%f,%f) and (%f,%f) is %f",l.p1.x,l.p1.y,l.p2.x,l.p2.y,l);
}