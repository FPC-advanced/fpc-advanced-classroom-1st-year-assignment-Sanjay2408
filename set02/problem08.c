#include <stdio.h>
typedef struct _triangle 
{
 float base, altitude, area;
} Triangle;
int input_n();
Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);
int main()
{
  int n;
  n = input_n();
  Triangle triangle[n];
  input_n_triangles(n,triangle);
  find_area(triangle);
  find_n_areas(n,triangle);
  Triangle smallest = find_smallest_triangle(n,triangle);
  output(n,triangle,smallest);
  return 0;
}
int input_n()
{
  int n;
  printf("Enter the number of triangles:\n");
  scanf("%d",&n);
  return n;
}
Triangle input_triangle()
{
  Triangle t;
  printf("Enter the base and altitude of the triangle:\n");
  scanf("%f %f",&t.base,&t.altitude);
  return t;
}
void input_n_triangles(int n, Triangle t[n])
{
 int i;
 for(i=0;i<n;i++)
 {
  t[i] = input_triangle();
 }
}
void find_area(Triangle *t)
{
  t->area=0.5 * t->base * t->altitude;
}
void find_n_areas(int n, Triangle t[n])
{
  int i;
  for(i=0;i<n;i++)
  {
    find_area(&t[i]);
  }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
  Triangle smallest=t[0];
  for(int i=0;i<n;i++)
  {
    if(t[i].area < smallest.area)
    {
      smallest = t[i];
    }
  }
  return smallest;
}
void output(int n,Triangle t[n],Triangle smallest)
{
 printf("The smallest triangle out of triangles with base and height ");
 for (int i=0;i<n;i++)
 {
  printf("(%.2f,%.2f)",t[i].base,t[i].altitude);
  if(i<n-1)
  {
    printf(",");
  }
 }
 printf(" is the triangle having base %.2f,height %.2f , and area %.2f ",smallest.base,smallest.altitude,smallest.area);
}
