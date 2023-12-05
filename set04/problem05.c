#include <stdio.h>
int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);
int main()
{ 
    int x

    return 0;
}
int input_size()
{
    int x;
    printf("Enter array size:");
    scanf("%d",&x);
    return x;
}
void input_array(int n, int a[n])
{
    printf("Enter %d elements into the array:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int find_largest_index(int n, int a[n])
{
    int i,j=a[0];
    int k=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>j)
        {
            j=a[i];
            k=i;

        }
    }
    return k;
}
void output(int index)
{
    printf("The index of the largest number in the array is %d\n",index);
}