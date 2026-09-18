#include <stdio.h>

int main() {
int n = 6;
for(int i=1;i<n;i++){
    /*i=1 is the first value for which loop will check
    i<n is the test for condition(here n=6) so it will check if i<6which is true first try(1<6)
    i++ will increase value of i for next cycle i=2 but will print i=1
    loop re-runs this time with i=2 until i =5 bcs 5 is last whole no. smaller than 6(our test case) */
   printf("%d is value of i\n",i); 
}
    return 0;
}