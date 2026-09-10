#include <stdio.h>
int main (){
    int a,b,c;
    printf("ENTER THREE NUMBERS:");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c)
    printf("all numbers are equal");
    else if(a>=b && a>=c)
    printf("%d isthe greatest number",a);
    else if(b>=a && b>=c)
    printf("%d is the greatest number",b);
    else
    printf("%d is the greatest number",c);
    return 0;
}