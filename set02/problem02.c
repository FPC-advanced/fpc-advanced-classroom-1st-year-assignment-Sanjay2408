#include <stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int main()
{
  int a,b,c,x,isscalene;
  a=input_side(x);
  b=input_side(x);
  c=input_side(x);
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}
int input_side()
{
  int x;
  printf("Enter the sides of the triangle\n");
  scanf("%d",&x);
  return x;
}
int check_scalene(int a, int b, int c)
{
 int isscalene;
 if(a!=b && b!=c && a!=c)
 {
  return 0;
 }
 else 
 if(a!=b || b!=c || a!=c)
 {
     return 1;
   }
   }
void output(int a, int b, int c, int isscalene)
{
 if(isscalene==0)
  {
   printf("The triangle with the sides %d,%d and %d is scalene",a,b,c);
  }
 else 
  {
   printf("The triangle with the sides %d,%d and %d is not scalene",a,b,c);
  }
}