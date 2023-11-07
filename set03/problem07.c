#include<stdio.h>
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
    return 0;
}
Point input_point()
{
    scanf("%f %f",p1.x,p1.y)
}