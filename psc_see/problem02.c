#include <stdio.h>
int array_size();
void array_elements(int n);
int factorial(int n,int a[n]);
void output(int n,int a[n],int fact);
int main()
{
    int n,fact;
    n=array_size();

    return 0;
}
int array_size()
{
    int n;
    printf("Enter the array size:\n");
    scanf("%d",&n);
    return n;
}
void array_elements(int n)
{
    
}