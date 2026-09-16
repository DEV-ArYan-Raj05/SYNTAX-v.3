#include <stdio.h>

int main()
{
    int a, b;
    printf("enter a number");
    scanf("%d", &a);
    if (a%97 == 0)
        printf("divisible by 97");
    else
        printf("not divisible by 97");

    return 0;
}