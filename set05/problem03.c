#include <stdio.h>
#include <math.h>

struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
void find_weight(Camel *c); 
void output(Camel c);
int main()
{

    return 0;
}
Camel input()
{
    Camel C;
    printf("Enter the radius,height,length of the camel:\n");
    scanf("%f,%f,%f",C.radius,C.height,C.weight);
    return C;
}