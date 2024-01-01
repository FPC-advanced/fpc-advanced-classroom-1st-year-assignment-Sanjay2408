#include <stdio.h>

int input();
int findFactorialFactor(int x);
void output(int x, int factor);

int main() {
    int x, factor;
    x = input();
    factor = findFactorialFactor(x);
    output(x, factor);
    return 0;
}

int input() {
    int x;
    printf("Enter the number to find its factorial factor:\n");
    scanf("%d", &x);
    return x;
}

int findFactorialFactor(int x) {
    int i = 1;
    int factorial = 1;

    while (factorial < x) {
        i++;
        factorial *= i;
    }

    if (factorial == x) {
        return i;
    } else {
        return 0;  // Not a factorial number
    }
}

void output(int x, int factor) {
    if (factor != 0) {
        printf("It is a factorial number, %d(%d!)\n", x, factor);
    } else {
        printf("%d is not a factorial number\n", x);
    }
}
