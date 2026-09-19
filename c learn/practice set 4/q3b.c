/*3. A do while loop is executed:
a. At least twice.*/
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
        i++;
    } while (i <= (n+2));
    return 0;
}