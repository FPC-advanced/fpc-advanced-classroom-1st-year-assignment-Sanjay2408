#include <stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
int main()
{
    int a,b,c,largest,x;
    a=input();
    b=input();
    c=input();
    largest=compare(a,b,c);
    output(a,b,c,largest);
    return 0;

}
int input()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    return x;
}
int compare(int a,int b,int c)
{
    int largest;
    if(a>=b && a>)
    {
        largest = a;    
    }
    else 
    if(b>=c)
    {
        largest = b;
    }
    else 
    {
        largest =c;   
    }
    return largest;
}
    void output(int a, int b, int c, int largest)
    {
        printf("The largest of %d ,%d and %d is %d",a,b,c,largest);
    }
