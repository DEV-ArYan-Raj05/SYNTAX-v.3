#include <stdio.h>

int main() {
int a, b, c, d;
printf("enter 4 numbers:\n");
scanf("%d %d %d %d", &a,&b,&c,&d);
if(a>=b && a>=c && a>=d){
    printf("%d is the greatest number\n",a);
}
else if(b>=c && b>=d && b>=a){
      printf("%d is the greatest number\n",b);
}
else if(c>=d && c>=a && c>=b){
      printf("%d is the greatest number\n",c);
}
else if(d>=a && d>=b && d>=c){
      printf("%d is the greatest number\n",d);
}
else if(a==b==c==d){
      printf("all numbers are equal\n");
}
    return 0;
}