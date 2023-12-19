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
    int fact=0;
 for(int i=x;i<=x/2;i--)
 {
    if ( x == (i-1) * i )
    {
        i == fact ;
    }
        break;
}
return fact;
}
void output(int x,int fact)
{
 printf("The factorial of %d(%d!)\n",x,fact);
}