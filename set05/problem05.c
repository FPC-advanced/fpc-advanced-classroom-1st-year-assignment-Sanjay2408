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
 float result,v;
//  1 + (x^1)/3! + (x^2)/5! + (x^3)/7! + ...
for(int i=0;i<x;i++)
{

}
}
void output(int x, float result)
{
    printf("The borga(%d) is %f",x,result);
}
