#include <stdio.h>

int main() {
int a;
printf("enter year in YYYY format:\n");
scanf("%d",&a);
if (a%4 == 0 && a%100!= 0 || a%400 == 0){
    printf("its a leap year\n");
}
else{
    printf("not a leap year.\n");
}
    return 0;
}