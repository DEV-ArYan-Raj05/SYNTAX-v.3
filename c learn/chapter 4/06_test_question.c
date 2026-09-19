/*write a program to take input from user for a locker if any of 3 attempts is correct access given or else access denied*/
#include<stdio.h>
int main(){
int i,n;
i=1;
while(i<=3){
    printf("enter passcode\n");
scanf("%d",&n);
if(n == 1234){
    printf("access given\n");
    break;
}
else{
    printf("access denied\n");

}
/*(n == 0010)?
(printf("access given\n");
break;):
(printf("access denied\n");
break;
);*/ // i am still not able to figure out why ternary operator failed
//ternary failed bcs we can add break in ternary operator .
i++;
}

    return 0;
}