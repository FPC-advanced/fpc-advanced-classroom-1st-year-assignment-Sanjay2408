#include<stdio.h>
int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);
int main()
{
 int n = input_array_size(); 
 int a[n];
 init_array(n,a);
 return 0;
}
int input_array_size()
{
 int n;
 printf("Enter the size of the array:");
 scanf("%d",&n);
 return n;
}
void init_array(int n, int a[n])
{
    int i;
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
}
void erotosthenes_sieve(int n, int a[n])
{
 int i;
 for(i=2;i*i<=n;i++)
 {
  if()
 }
}
void output(int n, int a[n])
{
    
}