#include <stdio.h>
int input(int );
int add(int ,int );
void output( int ,int ,int );
int main()
{
    int a,b,sum,x;
    a=input(x);
    b=input(x);
    sum=add(a,b);
    output(sum,a,b);
    return 0;
}
int input(int x)
{
    printf("Input a Number\n");
    scanf("%d",&x);
    return x;
}
int add(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
void output(int  sum,int a,int b)
{
    printf("The sum of %d and %d is %d",a,b,sum);
}