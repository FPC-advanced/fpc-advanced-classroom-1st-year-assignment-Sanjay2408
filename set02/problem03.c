#include <stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int main()
{
 int n,result;
 n=input_number();


 output(n,result);
 return 0;   
}
int input_number()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    return n;
}