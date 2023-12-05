#include <stdio.h>
void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);
int main()
{
 int n,r,ncr;
 input_n_and_r(&n,&r);
 result = nCr(n,r);
 output(n,r,ncr);
 return 0;
}
void input_n_and_r(int *n, int *r)
{
printf("Enter the value of n ,r:\n");
scanf("%d%d",n,r);
}
int nCr(int n, int r)
{
 
}
void output(int n, int r, int result)
{
 printf("for n=%d and r=%d,nCr = %d\n",n,r,result);
}

