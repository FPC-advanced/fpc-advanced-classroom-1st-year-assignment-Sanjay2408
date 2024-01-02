#include <stdio.h>
int array_size();
void array_values(int n, int a[n]);
void factorial(int n, int a[n], int b[n]);
void output(int n, int b[n]);
int main()
{
    int n, fact;
    n = array_size();
    int a[n];
    array_values(n, a);
    int b[n];
    factorial(n, a, b);
    output(n, b);
    return 0;
}
int array_size()
{
    int n;
    printf("Enter the array size:\n");
    scanf("%d", &n);
    return n;
}
void array_values(int n, int a[n])
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element for a[%d]\n", i);
        scanf("%d", &a[i]);
    }
}
void factorial(int n, int a[n], int b[n])
{
   int i = 1;
    int factorial = 1;

    while (factorial < x) {
        i++;
        factorial *= i;
    }
    if (factorial == x) {
        return i;
    } else {
        return 0;  
    }
}
void output(int n, int b[n])
{
    printf("The numbers are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", b[i]);
    }
}