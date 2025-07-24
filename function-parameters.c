#include <stdio.h>

void calculateSquare(int number)
{

    int square = number * number;
    printf("Square of %d is %d\n", number, square);
}

void addNumbers(int number1, int number2)
{

    int sum = number1 + number2;
    printf("Sum of %d and %d is %d\n", number1, number2, sum);
}

int addNumbers1(int number1, int number2)
{

    int sum = number1 + number2;
    return sum;
}
int main()
{

    calculateSquare(5);
    addNumbers(4, 10);
    int result = addNumbers1(20, 50);
    printf("Result = %d", result);
    return 0;
}