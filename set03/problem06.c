#include <stdio.h>
void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);
int main()
{
 char a,b,string,substring;
 int index;
 input_string(a,b);
 sub_str_index(string,substring);
 output(string,substring,index);
 return 0;
}
void input_string(char* a, char* b)
{
 printf("Enter a strings\n");
 scanf("%c",a);
 printf("Enter a substrings\n");
 scanf("%c",b);
}
int sub_str_index(char* string, char* substring)
{

}