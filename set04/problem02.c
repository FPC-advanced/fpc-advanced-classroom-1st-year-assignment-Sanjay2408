#include <stdio.h>
typedef struct {
    int num, den;
} Fraction;
int main()
{
    
}
Fraction input()
{
    Fraction x;
    scanf("%d%d",&x.num,&x.den);
    return x;
}
int hcf(int a,int b)
{
 if(b==0)
 {
    return a;
 }
 else
 {
    return hcf(b,a%b);
 }
}
int lcm(int a,int b);
{
    return (a*b)/hcf(b,a*b)
}