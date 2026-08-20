#include <stdio.h>
#include <math.h>
int main() {
    float c;
    float f;
    printf("Enter temperature in farhenheit");
    scanf("%f",&f);
    c=(f-32.0)*5.0/9.0;
    printf("temperature in celcius is %f",c);
    return 0;
}