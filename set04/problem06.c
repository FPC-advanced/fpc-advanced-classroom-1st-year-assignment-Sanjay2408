#include <stdio.h>
#include <string.h>
void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);
int main()
{
    return 0;
}
void input_string(char *a)
{
 scanf("%99[^\n],a");
}
int count_words(char *string)
{
    int c=0;
    char *tok = strtok(string," ");
    while(tok!='\0')
    {
        c++;
        tok=strtok(NULL,"")
    }
}