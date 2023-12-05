#include <stdio.h>
int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);
int main()
{
    return 0;
}
int input_degree()
{
    int n;
    printf("Enter degree:");
    scanf("%d",&n);
    return n;
}
void input_coefficients(int n, float a[n])
{
    printf("Enter %d coefficients:\n",n+1);
    for(int i=0;i<(n+1);i++)
    {
        scanf("%f",&a[i]);
    }
}
float input_x()
