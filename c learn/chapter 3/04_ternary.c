#include <stdio.h>

int main()
{
    int a = 345;
    int b = 3433;
    //condition?expression1(excecuted when true):expression2(executed when false)
    a > b ? printf("a is greater") : printf("b is greater");
    return 0;
}//output is called as shorthand if else or ternary operator.
// It is used to reduce the code length and make it more readable.