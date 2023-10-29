#include <stdio.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
int main()
{
    char str[100],rev_str[100],a[100],reverse_a[100];
    input_string(a);
    str_reverse(str, rev_str);
    output(a,reverse_a);
    return 0;
}
void input_string(char *a)
{
  printf("Enter a string:\n");
  scanf("%s",a);
}
void str_reverse(char *str, char *rev_str)
{
int 
}
void output(char *a, char *reverse_a)
{
    printf("the reversed string of %s is %s\n",a,reverse_a);
}
