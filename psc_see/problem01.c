#include <stdio.h>
int input();
int factorial(int x);
void output(int x, int fact);
int main()
{
    int x, fact;
    x = input();
    fact = factorial(x);
    output(x, fact);
    return 0;
}
int input()
{
    int x;
    printf("Enter the number to find its factorial:\n");
    scanf("%d", &x);
    return x;
}
int factorial(int x)
{
    int fact = 1;
    if (x == 0 || x==1)
    {
        return fact;
    }
    for(int i)
   return fact;
}
void output(int x, int fact)
{
    if (fact != 1)
    {
        printf("The factorial of %d(%d!)\n", x, fact);
    }
    else
        printf("%d is not a factorial number\n", x);
}
