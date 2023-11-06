#include <stdio.h>
int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
int main()
{ 
 int a,b,c,x,largest;
 x=input(&a,&b,&c);
 compare(a,b,c,&largest);
 output(a,b,c,largest);
 return 0;
}
int input(int *a, int *b, int *c)
{
 int x;
 printf("Enter three numbers\n");
 scanf("%d %d %d",a,b,c);
 return 0;
}
void compare(int a, int b, int c, int *largest)
{
  if(a>=b && a>=c)
  {
      *largest=a;
  }
  else
  if(b>=a && b>=c)
  {
      *largest=b;
  }
  else
  {
    *largest=c;
  }
}
void output(int a,int b,int c,int largest)
{
    printf("the largest of %d,%d and %d is %d",a,b,c,largest);
}
