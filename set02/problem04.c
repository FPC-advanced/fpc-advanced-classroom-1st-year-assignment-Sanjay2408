#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
int main()
{
    int n,sum;
    n=input_array_size();

    output(sum);
    return 0;
}
int input_array_size()
{
 int n;
 printf("Enter the size of array\n");
 scanf("%d",&n);
 return n;
}