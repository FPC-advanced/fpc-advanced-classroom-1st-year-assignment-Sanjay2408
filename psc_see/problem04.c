#include <stdio.h>

int input();
int isFactorial(int x);
void output(int x, int isFact, int fact);

int main() {
    int x, isFact, fact;
    x = input();
    isFact = isFactorial(x);
    if (isFact) {
        fact = x;
        output(x, isFact, fact);
    } else {
        output(x, isFact, 0);
    }
    return 0;
}

int input() {
    int x;
    printf("Enter the number to check if it's a factorial number:\n");
    scanf("%d", &x);
    return x;
}

int isFactorial(int x) {
    int i = 1, fact = 1;

    while (fact < x) {
        i++;
        fact *= i;
    }

    return (fact == x);
}

void output(int x, int isFact, int fact) {
    if (isFact) {
        printf("%d is a factorial number, and its factor is %d!\n", x, fact);
    } else {
        printf("%d is not a factorial number\n", x);
    }
}
