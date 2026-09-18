#include <stdio.h>

int main() {
int i=0;
while(i<4){/*this will check the condition for i ,here if
    the given value of i is less than 4 or not*/
    printf("happy birthday!!\n");//this will print happy birthday
    i=i+1;/*this will make previous value of i increased by 1 (i+1)
           hence this loop will get repeated unless i<4
           i.e. here for 0(print),for 1(print),for 2(print), for 3(print)*/
}
    return 0;//note:when i=4 then conditions would be 4!<4
    //so loop will break eventually and stop.
}