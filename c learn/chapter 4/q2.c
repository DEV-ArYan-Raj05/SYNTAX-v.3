//Quick Quiz: Write a program to print first 'n' natural number using do-while loop

#include <stdio.h>

int main() {
int n,i;
i=1;
printf("enter the 'n' natural numbers you want:");
scanf("%d",&n);
do{
    printf("%d\n",i);
    i++;
}while(i<(n+1));
    return 0;
}