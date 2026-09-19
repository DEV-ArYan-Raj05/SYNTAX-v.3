//5. Write a program to sum first ten natural numbers using while loop.
#include<stdio.h>
int main(){
int i,n,sum;
i=1;
sum=0;
printf("enter numbers you want'n'\n");
scanf("%d",&n);
while(i<=n){
    sum=sum+i;
    i++;
}
printf("%d is the sum of %d numbers\n",sum,n);
    return 0;
}