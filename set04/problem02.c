#include <stdio.h>
typedef struct {
    int num, den;
} Fraction;
int main()
{
    Fraction x,y,z,smallest;
    x=input();
    y=input();
    z=input();
    smallest=smallest2(x,y,z);
    output(x,y,z,smallest);
    return 0;
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
int lcm(int a,int b)
{
    return (a*b)/hcf(b,a%b);
}
int lcm2(int a,int b,int c)
{
    return lccm(lcm(a,b),c);
}
Fraction smallest2(Fraction x,Fraction y,Fraction z)
{
 int a=(x.num * y.den * z.den);
 int b=(y.num * x.den * z.den);
 int c=(z.num * x.den * y.den);
 Fraction r=(a<b)?((a<c)?x:z):((b<c)?y:z);
 return r;
}
void output(Fraction x,Fraction y,Fraction z,Fraction r)
{
    printf("The smallest out of %d/%d,%d/%d and %d/%d is %d/%d.\n",x.num,x.den,y.num,y.den,z.num,z.den,r.num,r.den);
}