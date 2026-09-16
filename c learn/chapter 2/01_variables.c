#include <stdio.h>
int main()
{
    int l = 20;    // integer variable
    int a = 10;    // integer variable
    float b = 5.5; // float variable
    char c = 'A';  // character variable
    int j = a;
    printf("Integer: %d\n", a);//%d is format specifier,for integer variable
    printf("Float: %.2f\n", b);// %f(%.2f means value of 2 decimal places) is format specifier,for float variable
    printf("Character: %c\n", c);// %c is format specifier,for character variable
    printf("value of j is %d and value of a is %d",j,a);
    printf("value of l is %d and value of a is %d",l,a);
    printf("value of l is %d and value of a is %d",l,a);

    return 0;
}
/*there is no exponent operator in C language,
d=a^b; will not result in a raised to the power of b, 
 so we can use pow() function to calculate exponentiation.
 but after invoking math.h library */