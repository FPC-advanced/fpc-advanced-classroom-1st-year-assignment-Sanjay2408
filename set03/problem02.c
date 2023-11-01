#include <stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);
int main()
{
 float x1,y1,x2,y2,x3,y3;
 int result;
 input_triangle(x1,y1,x2,y2,x3,y3);




 output(x1,y1,x2,y2,x3,y3,result);
    return 0;
}