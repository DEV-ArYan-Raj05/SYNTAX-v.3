#include <stdio.h>
int main()
{
    int a, b, c, d, e, g;
    float f;
    a = 10;
    b = 11;
    c = a + b;
    d = a - b;
    e = a * b;
    f = b/a;
    g = b%a;
    printf("Addition of a and b is %d\n", c);
    printf("Subtraction of a and b is %d\n", d);
    printf("Multiplication of a and b is %d\n", e);
    printf("Division of a and b is %.2f\n", f);
    printf("Modulus of a and b is %d\n", g);

    return 0;
}