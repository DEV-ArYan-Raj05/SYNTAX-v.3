#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    printf("enter marks of your 5 courses");
    scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
    f= (a+b+c+d+e)/5;
    printf("%d is the average of 5 courses",f);
    return 0;
}