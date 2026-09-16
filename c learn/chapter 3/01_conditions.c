#include <stdio.h>

int main() {
int a;
printf("Enter a number: ");
scanf("%d", &a);
if (a > 10) {
    printf("The number is greater than 10.\n");
} else {
    printf("The number is not greater than 10.\n");
}
return 0;
}