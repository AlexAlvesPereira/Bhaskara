#include <stdio.h>

int main(void)
{
    float a, b, c, delta;

    printf("Valor de A: ");
    scanf("%f", &a);

    printf("Valor de B: ");
    scanf("%f", &b);

    printf("Valor de C: ");
    scanf("%f", &c);

    delta = (b * b) - 4 * a * c;

    printf("Delta %f", delta);
}
