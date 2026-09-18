#include <stdio.h>
/*Quick Quiz: Write a program to print natural numbers from 10 to 20 when initial loop counter is
initialized to 0.*/
int main()
{
    int i = 0; // initialise i as 0
    while (i <= 20)
    { // to tell computer to continue in loop until max number reaches 20.
        /*since this if is a different statement
        so the loop actually starts from 0 and ends at 20
        like any other command*/
        if (i >= 10)
        { // this if tells it to print number only from 10 even if it starts from 0
            printf("the value of i is %d\n", i);
        }
        i++; // this is outside if bcs its increasing the value of loop i from 0 to 20
    }
    return 0;
}