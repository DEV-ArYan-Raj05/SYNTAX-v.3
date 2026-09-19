/*3. A do while loop is executed:
a. At least once.*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter n\n");
    scanf("%d", &n);
    int i = 1;
    do
    {
        printf("i am bored\n");

    } while (i <= n);
    return 0;
}
