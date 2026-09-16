#include <stdio.h>

int main()
{
    int a, b;
    a = 0;
    b = 1;
    printf("value of a and b is %d\n", a && b);//if both values are true then answer is true
    printf("value of a or b is %d\n", a || b);//if any one value is true then answer is true
    printf("value of not(a) is %d\n", !a);//opposite of a is answer
    return 0;
}