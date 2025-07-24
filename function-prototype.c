#include <stdio.h>

int addNumbers1(int number1, int number2); // function prototype
int main()
{

    int result = addNumbers1(20, 50);
    printf("Result = %d", result);
    return 0;
}

int addNumbers1(int number1, int number2)
{

    int sum = number1 + number2;
    return sum;
}