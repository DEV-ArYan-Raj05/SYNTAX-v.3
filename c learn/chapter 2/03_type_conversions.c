#include <stdio.h>

int main()
{
    int a = 9;
    int b = 2;
    float f = 2.00;
    int c = a / b;
    float d = a / b; /*ans will be 4.00 not 4.50 bcs value of even if
         you took result as float but int to int operation will always result in
         int value*/
    float e = a / f; /*answer will be 4.50 bcs its a operation between float and int */
    printf(" Value of integer function a / b is %d \n", c);
    printf(" Value of float function a / b is %.2f \n", d);
    printf(" Value of float function a / f is %.2f \n", e);
    return 0;
}