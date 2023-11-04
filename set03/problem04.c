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
int fibo,i,x1=0,x2=1;
for(i=0;i<n;i++)
{
    if(i<=1)
    {
        i=1;
    }
    else{
        fibo = x1 +x2;
        x1 = x2
    }

}
return fibo;
}
void output(int n,int fibo)
{
    printf("fibo (%d)=%d",n,fibo);
}
