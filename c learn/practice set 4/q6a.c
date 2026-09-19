//5. Write a program to sum first ten natural numbers using for loop.
#include<stdio.h>
int main(){
int n, sum;
sum =0;
printf("enter value of 'n' numbers:\n");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    sum+=i;
}
printf("%d is sum of first %d natural numbers\n",sum,n);
    return 0;
}