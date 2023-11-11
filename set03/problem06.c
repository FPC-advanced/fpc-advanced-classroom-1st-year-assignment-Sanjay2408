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
 printf("Enter a string:\n");
 scanf("%c",a);
 printf("Enter a substring to find:\n");
 scanf("%c",b);
}
int sub_str_index(char* string, char* substring)
{
 int i,j;
 for(i=0;string[i] != '\0;i++')
 {
  for(j=0;substring[j] != '\0' && string[i+j]== substring[j];j++);
  if(substring[j]=='\0')
  return i;
 }
 return -1;
}