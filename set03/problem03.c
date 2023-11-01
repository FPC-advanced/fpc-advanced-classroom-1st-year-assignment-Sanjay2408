#include <stdio.h>
int input_number();
int is_prime(int n);
void output(int n, int result);
int main()
{
    int n,result;
    n = input_number();
    result=is_prime(n);
    output(n,result);
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
    int i,result;
    if(n<=1)
    {
        return 0;
    }
    for(i=2;i*i<=n/2;i++)
    {
        if(n%i== 0)
        {
        return 0;
        }
        else
        {
            return 1;
        }
    }
    

    return result;
}
void output(int n, int result)
{
    if (result==1)
    {
    printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
}