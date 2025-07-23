#include <stdio.h>

int main(){

    int age = 28;

    (age >= 18) ? printf("You can vote") : printf("You cannot vote");

    char operator = '+';

    int num1 = 8;
    int num2 = 7;

   int result = (operator == '+') ? (num1 + num2 ) : (num1 - num2);

   printf("\n%d", result);

    return 0;
}