#include <stdio.h>
int input_number();
int is_prime(int n);
void output(int n, int result);
int main()
{
    int n,result;
    n = input_number();
    return 0;
}
int input_number()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    return n;
}
int is_prime(int n)
{
    int result;
    return result;
}
void output(int n, int result)
{
    if (result=0);
    {
    printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
}