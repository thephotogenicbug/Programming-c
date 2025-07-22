#include <stdio.h>

int main(){

    int age;

    printf("Enter your age: ");

    scanf("%d", &age);

    printf("\nAge = %d", age);


    double number;
    char alpha;

    printf("\nEnter double input: ");
    scanf("%lf", &number);

    printf("Enter character input: ");
    scanf("\n%c", &alpha);

    printf("\nDouble Output: %lf", number);
    printf("\nCharacter Output: %c", alpha);

    printf("Enter input values: ");
    scanf("%lf %c", &number, &alpha);

    printf("\nDouble Output: %lf", number);
    printf("\nCharacter Output: %c", alpha);

    return 0;
}