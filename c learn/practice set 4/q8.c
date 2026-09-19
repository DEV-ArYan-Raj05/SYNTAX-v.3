//Write a program to calculate the factorial of a given number using a for loop.
#include <stdio.h>

int main() {
int n, f;
f=1;
printf("enter number 'n' whose factorial you want:\n ");
scanf("%d",&n);
for(int i= n;i ;i--){
    f=i*f;
}
printf("%d is factorial of %d\n",f,n);
    return 0;
}