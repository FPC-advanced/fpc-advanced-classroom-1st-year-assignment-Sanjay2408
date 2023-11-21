#include <stdio.h>
#include <math.h>
int input();
float borga_X(int x);
void output(int x, float result);
int main()
{
    int x;
    float result;
    x = input();
    result=borga_X(x);
    output(x,result);
    return 0;
}
int input()
{
    int x;
    printf("Enter a number:\n");
    scanf("%d",&x);
    return x;
}
float borga_X(int x)
{
 float result=1;
 float term;
 float factorial=1;
for(int i=1;i<=x;i++)
{
 factorial *= 2 * i* ( 2 * i - 1);
 term = pow(x,2 * i - 1)/factorial;
 result+=term;
}
return result;
}
void output(int x, float result)
{
    printf("The borga(%d) is %f",x,result);
}
