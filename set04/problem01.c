#include <stdio.h>
void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);
int main()
{
    int num1, den1, num2, den2, res_num, res_den;
    input(&num1, &den1, &num2, &den2);
    add(num1, den1, num2, den2, &res_num, &res_den);
    output(num1, den1, num2, den2, res_num, res_den);
    return 0;
}
void input(int *num1, int *den1, int *num2, int *den2)
{
    printf("Enter the numerator and denominator of first fraction:\n");
    scanf("%d %d", num1, den1);
    printf("Enter the numerator and denominator of second fraction:\n");
    scanf("%d %d", num2, den2);
}

int find_gcd(int a, int b)
{
    int gcd, i;
    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    return gcd;
}

void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{
    if (den1 == den2)
    {
        *res_num = num1 + num2;
        *res_den = den1;
    }
    else
    {
        *res_num = (num1 * den2) + (num2 * den1);
        *res_den = (den1 * den2);
    }
    int gcd = find_gcd(*res_num, *res_den);
    *res_num /= gcd;
    *res_den /= gcd;
}

void output(int num1, int den1, int num2, int den2, int res_num, int res_den)
{
    printf("%d/%d + %d/%d = %d/%d\n", num1, den1, num2, den2, res_num, res_den);
}