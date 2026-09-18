#include <stdio.h>

int main() {
float a, p;
printf("enter your income in LPA:\n");
    scanf("%f",&a);
    if(a<2.5){
    printf("no tax\n");
    }else if(a<=5.0){
p = a*0.05;
    printf("tax is 5 percent that is Rs. %.2f lakhs\n",p);
    }
    else if(a<=10.0){
p = a*0.20;
    printf("tax is 20 percent that is Rs. %.2f lakhs\n",p);
    }
    else if(a>10.0){
p = a*0.30;
    printf("tax is 30 percent that is Rs. %.2f lakhs\n",p);
    }
    return 0;
}