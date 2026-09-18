#include <stdio.h>

int main()
{
    int a;
    printf("enter number 1 or 2:\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("you entered 1\n");
        break;
    case 2:
        printf("you entered 2\n");
        break;
    default:
        printf("number entered is not 1 or 2\n");
        break;
    }
    return 0;
}