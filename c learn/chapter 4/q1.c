#include <stdio.h>
//failed attempt
int main() {
int i=0;
/*while(9<i<21){
this became a mistaken infinite loop bcs:((9<i)<21) is evaluated
if i = 0-20 it will satisfy i<21
if i =21-infinite satisfies 9>i so loop will not stop.
*/
while(i>=10 && i<=20){
    printf("value of i is %d\n",i);
    i++;
}
    return 0;
}