#include <stdio.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
int main()
{
    char str[100],rev_str[100],a[100];
    input_string(&a);
    return 0;
}
void input_string(char *a)
{
  printf("Enter a string:\n");
  scanf("%s",a);
}