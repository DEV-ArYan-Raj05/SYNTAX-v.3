#include <stdio.h>

int main()
{
    int marks[5];
    printf("enter marks of 5 students\n");
   /* scanf("%d", &marks[0]);
    scanf("%d", &marks[1]);
    scanf("%d", &marks[2]);
    scanf("%d", &marks[3]);
    scanf("%d", &marks[4]);
    printf("marks 0 and marks 1 is %d %d\n", marks[0], marks[1]);
    printf("marks 2 and marks 3 is %d %d\n", marks[2], marks[3]);
    printf("marks 4 and marks 0 is %d %d\n", marks[4], marks[0]);
    */
   for(int i=0;i<5;i++){
    scanf("%d",&marks[i]);
   }
   for(int i=0;i<5;i++){
    printf("%d is marks%d\n",marks[i],i);
   }
    return 0;
}