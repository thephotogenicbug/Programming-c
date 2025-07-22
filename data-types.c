   /*
      int                (4 bytes) | %d for printing
      double             (8 bytes) | %lf for printing
      float              (4 bytes) | %f for printing
      char               (1 bytes) | %c for printing
    */
#include <stdio.h>
int main(){

    int age = 10;
    printf("\nInt = %d",age);

    double number = 12.45;
    printf("\nDouble = %.2lf", number);

    float number1 = 10.9f;
    printf("\nFloat = %.1f", number1);

    double number2 = 5.5e6;
    printf("\nExponential = %lf", number2);

    char character = 'z';
    printf("\nCharacter = %c ", character);
    printf("\nCharacter Int = %d ", character);

    // size of operator
    int age1;
    double number3;

    printf("\nsize of int = %zu", sizeof(age1));
    printf("\nsize of double = %zu", sizeof(double));

    return 0;
}