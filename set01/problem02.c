//2. Write a C program to add two numbers.
#include <stdio.h>
int main()
{
    int a,b,c=0;
    printf("Input two number a,b\n");
    scanf("%d %d",&a,&b);
    printf("The two numbers are %d and %d\n",a,b);
    c=a+b;
    printf("The sum of %d and %d is %d",a,b,c);
    return 0;
}
