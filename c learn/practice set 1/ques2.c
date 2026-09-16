#include<stdio.h>
int main(){
    float a,r,h;
    printf("Enter the radius and heightof cylinder: ");
    scanf("%f %f",&r,&h);
    a=((22*r*r)/7)*h;
    printf("volume of cylinder is %.2f\n",a);
    return 0;
}