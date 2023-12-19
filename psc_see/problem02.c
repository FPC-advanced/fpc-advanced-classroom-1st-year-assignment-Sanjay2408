#include <stdio.h>
int array_size();
void array_values(int n,int a[n]);
void factorial(int n,int a[n],int b[n]);
void output(int n,int b[n]);
int main()
{
    int n,fact;
    n=array_size();
    int a[n];
    array_values(n,a);
    int b[n];
    factorial(n,a,b);
    output(n,b);
    return 0;
}
int array_size()
{
    int n;
    printf("Enter the array size:\n");
    scanf("%d",&n);
    return n;
}
void array_values(int n,int a[n])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the element for a[%d]\n",i);
        scanf("%d",&a[i]);
    }
}
void factorial(int n,int a[n],int b[n])
{
    int fact=0; 
    for(int j=0;j<n;j++)
 {
 for(int i=1;i<a[n]/2;i++)
 {
    if (a[j]%i == 0)
    {
        fact = i ;
    }
 }  
 if(fact == a[j]/2)
 {
    b[j]=a[j];
 }
 }
}
// void factorial_numbers(int n,int b[n])
// {
//     int i;   
//     scanf("%d",&b[i]);
// }
void output(int n,int b[n])
{
    printf("The numbers are: \n");
 for(int i=0;i<n;i++)
 {
    printf("%d\n",b[i]);
 }
}