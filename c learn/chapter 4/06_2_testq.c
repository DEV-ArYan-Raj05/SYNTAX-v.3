///*write a program to take input from user for a locker if any of 3 attempts is correct access given or else access denied using for loop*/
#include <stdio.h>
int main()
{
    int n;
    for (int i = 1; i <= 3; i++)
    {
    printf("enter passcode\n");
        scanf("%d",&n);
        if(n==1234){
            printf("access given\n");
                break;
        }
        else{
            printf("acsess denied\n");
        }
    }
    return 0;
}