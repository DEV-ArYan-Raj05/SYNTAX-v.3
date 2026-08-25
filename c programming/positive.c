#include <stdio.h>
int main (){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a>0)
    printf("positive");
    if(a==0)
    printf("neither negative or positive");
    else
    printf("negative");
    return 0;
}