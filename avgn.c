#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int n;
    printf("enter n (number of courses)");
    scanf("%d", &n);
    printf("enter marks of your %d courses", n);
    // Note: This code assumes 5 courses; for a general solution, dynamic allocation or an array would be better
    scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
    f= (a+b+c+d+e)/5;
    printf("%d is the average of 5 courses",f);
    return 0;
}