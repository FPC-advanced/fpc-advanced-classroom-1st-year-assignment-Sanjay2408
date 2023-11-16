#include <stdio.h>
#include <math.h>
void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);
int main()
{
    float radius,height,length,weight;
    void input_camel_details(radius,height,length);
    return 0;
}
void input_camel_details(float *radius, float *height, float *length)
{
    printf("Enter the radius,height and length of the Camel:\n");
    scanf("%f %f %f",&radius,&height,&length);
}
float find_weight(float radius, float height, float length)
{
    float weight,pi;
    pi = 3.142;
    weight = pi * radius*radius*radius * sqrt(height * length);
    return weight;
}