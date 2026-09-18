//Quick Quiz: Write a program to print first 'n' natural numbers using for loop.
#include<stdio.h>
int main (){
int n;
printf("enter your 'n' natural numbers\n");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    printf("%d\n",i);
}
     return 0;
}