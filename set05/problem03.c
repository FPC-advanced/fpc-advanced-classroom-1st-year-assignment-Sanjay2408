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
    printf("Enter the radius,height,length of the camel:")
}