#include <stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
int main()
{
    int a,b,gcd,x;
    a = input();
    b = input();


    return 0;
}
int input()
{
    int x;
    printf("Enter two numbers\n");
    scanf("%d",&x);
    return x;
}
void output(int a, int b, int gcd)
{
    printf("The HCF of %d and %d is %d")
}