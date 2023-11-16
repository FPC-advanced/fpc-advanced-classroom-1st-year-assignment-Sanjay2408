#include <stdio.h>
#include <math.h>


struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
void find_weight(Camel *c); 
void output(Camel c);
