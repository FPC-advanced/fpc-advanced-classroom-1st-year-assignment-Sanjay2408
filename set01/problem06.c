#include <stdio.h>
void input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
int main()
{
  int a, b, c, x, largest;
  input(&a, &b, &c);
  compare(a, b, c, &largest);
  output(a, b, c, largest);
  return 0;
}
void input(int *a, int *b, int *c)
{
  int x;
  printf("Enter three numbers\n");
  scanf("%d %d %d", a, b, c);
}
void compare(int a, int b, int c, int *largest)
{
  if (a >= b && a >= c)
  {
    *largest = a;
  }
  else if (b >= c)
  {
    *largest = b;
  }
  else
  {
    *largest = c;
  }
}
void output(int a, int b, int c, int largest)
{
  printf("the largest of %d,%d and %d is %d", a, b, c, largest);
}
