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
	printf("Enter base and altitude of triangle\n");
	scanf("%f",&t->base);
	scanf("%f",&t->altitude);

}
