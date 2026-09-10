#include <stdio.h>
int main (){
   int a;
   int b;
   int c;
    printf("ENTER THREE NUMBERS:");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>b && a>c)
    printf("%d is the greatest number",a);
    else if(b>a && b>c)
    printf("%d is the greatest number",b);
    else if(c>a && c>b)
    printf("%d is the greatest number",c);
    else if(a==b){
        if(a>c)
        printf("%d is greatest number",a);
        else if(a==c)
        printf("All numbers are equal");
        else
        printf("%d is the greatest number",c);
    }
    else if(b==c){
        if(c>a)
        printf("%d is the greatest number",c);
        else if(c==a)        
        printf("All numbers are equal");
        else
        printf("%d is the greatest number",a);
    }
else
printf("this case is not accounted for");
return 0;
}
