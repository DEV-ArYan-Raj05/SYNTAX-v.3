#include <stdio.h>

int main()
{
    int a;
    printf("enter your grade:\n");
    scanf("%d", &a);
    if (a >= 90)
    {
        printf("A grade\n");
    }
    else if (a >= 80)
    {
        printf("B grade\n");
    }
    else if (a >= 70)
    {
        printf("C grade\n");
    }
    else if (a >= 60)
    {
        printf("D grade\n");
    }
    else if (a >= 50)
    {
        printf("E grade\n");
    }
    else if (a < 50)
    {
        printf("F grade\n");
    }
    return 0;
}