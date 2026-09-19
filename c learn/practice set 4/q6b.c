//Write a program to sum first ten natural numbers using do-while loop.
#include <stdio.h>

int main() {
int i,n,sum;
i=1;
sum=0;
printf("enter 'n' natural numbers you want sum of:\n");
scanf("%d",&n);
do{
    sum+=i;
    i++;
}while(i<=n);
printf("%d is the sum of %d natural numbers\n",sum,n);
    return 0;
}