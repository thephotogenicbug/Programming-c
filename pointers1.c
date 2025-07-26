#include <stdio.h>

int main()
{
    int age = 25;

    int* ptr = &age;

    *ptr = 31; // change value using pointer

    printf("%d", age);

    return 0;
}