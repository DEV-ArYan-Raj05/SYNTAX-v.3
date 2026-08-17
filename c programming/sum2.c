#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    printf("enter 3 numbers you want product of");
    scanf("%d,%d,%d",&a,&b,&c);
    d= a*b*c;
    printf("%d is the output of the product of 3 numbers",d);
    return 0;
}