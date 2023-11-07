#include<stdio.h>
typedef struct point 
{
 float x,y;
} Point;
typedef struct polygon 
{
 int sides;
 Point p[100];
 float perimeter;
} Polygon;
int input_n();
Point input_point();
void input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(Polygon* p);
void output(Polygon p);
int main()
{
Polygon p;
p.sides=input_n();
input_polygon(&p);
find_perimeter(&p);
output(p);
return 0;
}
int input_n()
{
 int n;
 printf("Enter the Number of sides in the polygon\n");
 scanf("%d",&n);
 return n;
}
Point input_point()
{
  Point p;
  scanf("%f %f",&p.x,&p.y);
  return p;
}
void input_polygon(Polygon *p)
{
 int i;
  for(i=0;i<p->sides;i++)
  {
    printf("Enter the coordinates of point %d (x,y)\n",i);
    p->p[i] = input_point();
  }
}
float find_distance(Point a, Point b)
{

}
void find_perimeter(Polygon* p)
{

}
void output(Polygon p);
{
  printf("")
}