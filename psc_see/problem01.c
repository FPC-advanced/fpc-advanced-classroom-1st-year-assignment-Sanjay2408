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
    int fact;
    if (x == 1)
    {
        return 0;
    }
    else if (x == 2)
    {
        return 2;
    }
    for(int j=1;j>=x;j++)
    {
    for (int i = x; i >= x ; i--)
    {
        if(i == j*(j+1) )
        {
         return j
        }
    }
    }
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
