#include <stdio.h>
typedef struct fraction
{
    int num, den;
} Fraction;

int input_n();
Fraction input_fraction();
void input_n_fractions(int n, Fraction f[n]);
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
Fraction add_n_fractions(int n, Fraction f[n]);
void output(int n, Fraction f[n], Fraction sum);
int main()
{
    return 0;
}
int input_n()
{
    int num,den;
    printf("Enter the numerator and denominator of the fraction:/n");
    scanf("%d",num);
    scanf("%d",den);
}