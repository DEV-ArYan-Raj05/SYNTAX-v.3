#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age>=60){
        printf("you can drive but with care bcs you are senior citizen\n");
    }
       if(age>=45){
        printf("you can drive but you are elder citizen\n");
    }
    else if (age >= 18)
    {
        printf("you are eligible to drive\n");
    }
    else
    {
        printf("you cannot drive");
    }
    return 0;
}