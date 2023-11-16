#include <stdio.h>
void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);
int main()
{
    float radius,height,length;
    int mood;
    input_camel_details(&radius,&height,&length);
    mood=find_mood(radius,height,length);
    output(radius,height,length,mood);
    return 0;
}
void input_camel_details(float *radius, float *height, float *length)
{
    printf("Enter the radius,height and length of the camel:\n");
    scanf("%f %f %f",radius,height,length);
}
int find_mood(float radius, float height, float length)
{
    int mood;
    if(radius<height<length)
    {
        return 0;
    }
    else
    if(height<length<radius)
    {
        return 1;
    }
    else
    if(length<height<radius)
    {
        return -1;
    }
    return mood;
}
void output(float radius, float height, float length, int mood)
{
    if(mood == 0)
    {
        printf("Camel is Sick \n");
    }
    else 
    if(mood == 0)
    {
        printf("Camel is Happy \n");
    } 
    else
    if(mood == 0)
    {
        printf("Camel is Tense \n");
    } 
    }