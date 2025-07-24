#include <stdio.h>

void addNumbers(int number1, int number2)
{

    int result = number1 + number2;
    printf("Result = %d\n", result); // local scope
}

int addNumbers1(int number1, int number2)
{

    int result = number1 + number2;
    return result; // global scope
}
int main()
{

    addNumbers(10, 20);
    int result = addNumbers1(40, 20);
    printf("Result = %d", result);
    return 0;
}