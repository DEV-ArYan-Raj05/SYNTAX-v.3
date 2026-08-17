#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int n;
    printf("enter number of courses");
    scanf("%d",&n);
    printf("enter respective marks of course");
    scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
    f=(a+b+c+d+e)/n;
    printf("%d is your avg marks",f);
    return 0;
}  