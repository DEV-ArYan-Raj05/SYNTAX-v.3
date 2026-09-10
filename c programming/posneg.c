#include <stdio.h>
int main (){
    int a;
    printf("ENTER NUMBER:");
    scanf("%d",&a);
    if(a>0)
    printf("positive");
    else if(a==0)
    printf("zero niether positive nor negative");
    else
    printf("negative");
    return 0;
}