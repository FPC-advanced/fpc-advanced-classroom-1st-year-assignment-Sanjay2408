#include <stdio.h>
void input_string(char *a, char *b);
int sub_str_index(char *string, char *substring);
void output(char *string, char *substring, int index);
int main()
{
    char string[100], substring[100];
    int index;
    input_string(string, substring);
    index = sub_str_index(string, substring);
    output(string, substring, index);
    return 0;
}
void input_string(char *a, char *b)
{
    printf("Enter a string:\n");
    scanf(" %s", a);
    printf("Enter a substring to find:\n");
    scanf(" %s", b);
}
int sub_str_index(char *string, char *substring)
{
    int i = 0, j = 0, len1 = 0, len2 = 0;
    for (len1 = 0; string[len1] != '\0'; len1++)
        ;
    for (len2 = 0; substring[len2] != '\0'; len2++)
        ;
    for (i = 0; i < len1 - len2 + 1; i++)
    {
        if (string[i] == substring[0])
        {
            for (j = 0; j < len2; j++)
            {
                if (substring[j] != string[i])
                {
                    break;
                }
                else
                {
                    return i;
                }
            }
        }
    }
    return -1;
}

void output(char *string, char *substring, int index)
{
    if (index != -1)
    {
        printf("The index of %s in %s is %d\n", substring, string, index);
    }
    else
    {
        printf(" %s is  not a substring of %s", substring, string);
    }
}