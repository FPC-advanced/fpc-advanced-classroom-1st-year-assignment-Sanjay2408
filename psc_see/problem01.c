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
 for(int i=0;i<=x/2;i++)
 {
    if ( x == i * (i-1) )
    {
        fact==i;
    }
    break;
}
return fact;
}
void output(int x,int fact)
{
 printf("Thefactorial of %d(%d!)\n",x,fact);
}