/*Write a program to print multiplication table of a given number n */
#include <stdio.h>

int main() {
int n,c;
printf("enter the number'n' you want multiplication table of upto n x 10\n");
scanf("%d",&n);
for(int i=1;i<=10;i++){
    c=n*i;
    printf("%d x %d = %d\n",n ,i ,c);
}
    return 0;
}