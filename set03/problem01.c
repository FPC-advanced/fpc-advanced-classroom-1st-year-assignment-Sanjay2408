#include <stdio.h>
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);
int main()
{
    float x1,x2,y1,y2,distance;
    input(&x1,&y1,&x2,&y2);
    distance=find_distance(x1,y1,x2,y2);
    output(x1,y1,x2,y2,distance);
    return 0;
}
void input(float *x1, float *y1, float *x2, float *y2)
{
    printf("Enter the values of x1,y1,x2,y2\n");
    scanf("%f %f %f %f",x1,y1,x2,y2);
}
float find_distance(float x1, float y1, float x2, float y2)
{
    float distance;
    float x,epsilon;
    x=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)
epsilon = 0.000001;
while((x*x-n) > epsilon || (n-x*x)> epsilon)
{
    x=0.5*(x+n/x);
}
    x=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
}
void output(float x1, float y1, float x2, float y2, float distance)
{
    printf("The distance between the points(%f,%f) and (%f,%f) is %f",x1,y1,x2,y2,distance);
}