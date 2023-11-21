#include <stdio.h>
#include <math.h>

struct camel
{
    float radius, height, length, weight;
};

typedef struct camel Camel;

Camel input();
void find_weight(Camel *C);
void output(Camel C);
int main()
{
    Camel C;
    float radius, height, length, weight;
    C = input();
    find_weight(&C);
    output(C);
    return 0;
}
Camel input()
{
    Camel C;
    printf("Enter the radius,height,length of the camel:\n");
    scanf("%f %f %f", &C.radius, &C.height, &C.length);
    return C;
}
void find_weight(Camel *C)
{
    float weight, pi;
    pi = 3.142;
    C->weight = pi * C->radius * C->radius * C->radius * sqrt(C->height * C->length);
}
void output(Camel C)
{
    printf("The weight of the camel with radius: %0.1f, height: %0.1f, length: %0.1f is %f", C.radius, C.height, C.length, C.weight);
}