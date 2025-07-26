#include <stdio.h>

int main()
{
    int age = 25;

    printf("%p", &age); // access memory address

    int *ptr = &age; // store memory address of age
    printf("\n%p", ptr);

    printf("\nAddress: %p", ptr);

    printf("\nValue: %d", *ptr); // outputs value stored in *ptr address

    return 0;
}