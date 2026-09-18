#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 10)
    {
        printf("value of i is %d\n", i);
        i++;
        /*i=i++; i wrote this which made my code go haywire bcs i still got assigned as 0
         everytime making a infinite loop of bad code*/
       
    }
    return 0;
}