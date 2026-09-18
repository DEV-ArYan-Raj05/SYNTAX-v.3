#include <stdio.h>

int main() {
int a,b,c,d;//i will use  ternary operator here
printf("enter your total score out of 300:\n");
scanf("%d",&a);
    if ( a <120){
    printf("you are failed\n");
    }
    else if(a >=120){
    printf("enter your marks in subject 1, subject 2 and subject 3 out of 100:\n");
    scanf("%d,%d,%d",&b,&c,&d);
    (b>=33 && c>=33 && d>=33)?//defined condition
     printf("you are passed\n"): //defined if true print
     printf("you are failed\n");//defined if false print 
    
}
    return 0;
}