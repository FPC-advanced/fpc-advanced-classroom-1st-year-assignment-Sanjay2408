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
 erotosthenes_sieve(n,a);
 output(n,a);
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
  if(a[i] != 0)
  {
   for (int j=i*i;j <=n; j+=i)
   {
       a[j]=0;
   }
  }
 }
}
void output(int n, int a[n])
{
 for(int i=2;i<=n;i++)
 {
  if(a[i] != 0)
   {
    printf("%d",i);
   }
 }
 printf("\n");
}