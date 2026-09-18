#include <stdio.h>

int main() {
int a,b,c,d;
printf("enter your total score out of 300:\n");
scanf("%d",&a);
    if ( a <120){
    printf("you are failed\n");
    }
    else if(a >=120){
    printf("enter your marks in subject 1, subject 2 and subject 3 out of 100:\n");
    scanf("%d,%d,%d",&b,&c,&d);
    if(b>=33 && c>=33 && d>=33){
        printf("you are passed\n");
    }
    else{
        printf("you are failed\n");
    }
}
    return 0;
}