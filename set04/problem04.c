#include <stdio.h>
int input_degree();
void input_coefficients(int n, float a[n+1]);
float input_x();
float evaluate_polynomial(int n, float a[n+1], float x);
void output(int n, float a[n+1], float x, float result);
int main()
{
    int n;
    n=input_degree();
    float a[n+1],z=0,x=0;
    input_coefficients(n,a);
    x=input_x();
    z = 

    return 0;
}
int input_degree()
{
    int n;
    printf("Enter degree:");
    scanf("%d",&n);
    return n;
}
void input_coefficients(int n, float a[n+1])
{
    printf("Enter %d coefficients:\n",n+1);
    for(int i=0;i<(n+1);i++)
    {
        scanf("%f",&a[i]);
    }
}
float input_x()
{
    float x;
    printf("Enter the number you want to evaluate:\n");
    scanf("%f",&x);
    return x;
}
float evaluate_polynomial(int n, float a[n+1], float x)
{
    float z=a[n];
    for(int i=n-1;i>=0;i--)
    {
        z=(z*x)+a[i];
    }
    return z;
}
void output(int n, float a[n+1], float x, float result)
{
    printf("%.2f\n",result);
}