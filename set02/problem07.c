#include<stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);
int main()
{
    Triangle t = input_triangle();
	find_area(&t);
    output(t);
}
Triangle input_triangle()
{
	Triangle t;
	printf("Enter base and altitude of triangle\n");
	scanf("%f",&t.base);
	scanf("%f",&t.altitude);
	return t;
}
void find_area(Triangle *t)
{
	t->area=0.5 * t->base * t->altitude;
}
void output(Triangle t)
{
	printf("The area of the triangle with the base %f and altitude %f is %f",)
}