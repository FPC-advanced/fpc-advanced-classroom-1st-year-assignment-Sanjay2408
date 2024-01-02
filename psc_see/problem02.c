#include <stdio.h>

int array_size();
void array_values(int n, int a[n]);
void factorial(int n, int a[n], int b[n]);
void output(int n, int b[n]);

int main()
{
    int n;
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
    for (int i = 0; i < n; i++)
    {
        int j = 1;
        int factorial = 1;
        while (factorial < a[i])
        {
            j++;
            factorial *= j;
        }
        if (factorial == a[i])
        {
            b[i] = j;
        }
        else
        {
            b[i] = -1; // indicating that there is no factorial for the given number
        }
    }
}

void output(int n, int b[n])
{
    printf("The factorials are: \n");
    for (int i = 0; i < n; i++)
    {
        if (b[i] != -1)
        {
            printf("%d! = %d\n", b[i], a[i]);
        }
    }
}
