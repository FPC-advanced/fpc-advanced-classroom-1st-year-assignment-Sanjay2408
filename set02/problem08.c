#include <stdio.h>


typedef struct _triangle {
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
 Triangle t =input_triangle();
 input_n_triangles(n,t);


return 0;
}
int input_n()
{
    int n;
    printf("Enter the number of triangles:");
    scanf("%d",&n);
    return n;
}
Triangle input_triangle()
{
    Triangle t;
printf("Enter the base and altitude of the triangle:");
scanf("%f,%f",&t.base,&t.altitude);
return t;
}
void input_n_triangles(int n, Triangle t[n])
{
 for(i=0;i<n;i++)
 {
    t[i] = input_triangle();
 }

}