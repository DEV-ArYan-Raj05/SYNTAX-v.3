/*Write a program to calculate the sum of the numbers occurring in the multiplication
table of 8 (consider 8 × 1 to 8 × 10)*/
#include <stdio.h>

int main() {
int sum;
sum=0;
for(int i=8; i<=80 ;(i+=8)){
    sum+=i;
}
printf("%d is sum of table of 8 till 8 x 10" ,sum);
    return 0;
}