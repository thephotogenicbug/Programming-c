#include <stdio.h>

int main(){

    int age = 25;
    printf("Age: %d", age); // %d format specifier

    age = 28;
    printf("\nNew Age: %d", age);

    int firstNumber = 33;
    printf("\nFirst Number: %d",firstNumber);

    int secondNumber = firstNumber;
    printf("\nSecond Number = %d", secondNumber);

    int variable1, variable2 = 25;

    printf("\nVariable1 %d", variable1);
    printf("\nVariable2 %d", variable2);


    return 0;
}