#include<stdio.h>
int input();
int factorial(int x);
void output(int x,int fact);
int main()
{
    int x,fact;
    x=input();
    fact = factorial(x);
    output(x,fact);
    return 0;
}
int input()
{
    int x;
    printf("Enter the number to find its factorial:\n");
    scanf("%d",&x);
    return x;
}
int factorial(int x)
{
    int fact;
    for(int i=1;i<=x/2;i++)
    {
        if ((x==1))
        {
            return 0;
            break;
        }
    else
    if ((x==1))
        {
            return 2;
            break;
        }
     else
    if (x%i == 0)
    {
        fact = i ;
    }
    else
    {
        break;
    }
 }

return fact;
}
void output(int x,int fact)
{
    if(fact != 1)
    {
        printf("The factorial of %d(%d!)\n",x,fact);
    }
    else
    printf("%d is not a factorial number\n",x);
}