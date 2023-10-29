#include <stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
int main()
{
    int a,b,gcd,x;
    a = input();
    b = input();
    gcd=find_gcd(a,b);
    output(a,b,gcd);
    return 0;
}
int input()
{
    int x;
    printf("Enter two numbers\n");
    scanf("%d",&x);
    return x;
}
int find_gcd(int a, int b)
{
    int gcd,i;
    for(i=1;i<=a && i<=b;i++)
    {
        gcd = i%a == i%b 
    }
}
void output(int a, int b, int gcd)
{
    printf("The HCF of %d and %d is %d",a,b,gcd);
}