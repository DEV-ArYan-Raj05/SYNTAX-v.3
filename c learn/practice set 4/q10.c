/*Write a program to check whether a given number is prime or not using loops.
*/
#include <stdio.h>

int main() {
int n,flag;
printf("enter number:\n");
scanf("%d",&n);
for(int i=2;i<n;i++){//i=2 taken bcs every no. is divisible by 1 giving false flags
if(n%i==0){
    flag = 1;//here we used a flag to tell its divisible
}
}
if(flag==1){
    printf("not a prime\n");
}
else 
printf("no. is a prime\n");
    return 0;
}