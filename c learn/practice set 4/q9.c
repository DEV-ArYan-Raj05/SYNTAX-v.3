/*Write a program to calculate the factorial of a given number using a while loop.
 */
#include <stdio.h>

int main()
{
    int i, n, f;
    f = 1;
    printf("enter number 'n' whose factorial you want:\n ");
    scanf("%d", &n);
        i=n;
    while (i >= 1)
    {
        f *=i;
        i--;
    }
    printf("%d is factorial of %d", f, n);
     return 0;
}