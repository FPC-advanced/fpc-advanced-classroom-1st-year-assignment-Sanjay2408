#include <stdio.h>
int input();
int find_fibo(int n);
void output(int n, int fibo);
int main()
{
    int n,fibo;
    n = input();
    fibo = find_fibo(n);
    output(n,fibo);
    return 0;
}
int input()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    return n;
}
int find_fibo(int n)
{
int fibo,i;
for(i=0;i<)

}
void output(int n,int fibo)
{
    printf("fibo (%d)=%d",n,fibo);
}
