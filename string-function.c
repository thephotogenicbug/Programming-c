#include <stdio.h>
#include <string.h>
int main()
{

    char language[] = "C Programming";

    printf("%s", language);
    printf("\nString length = %zu", strlen(language));

    char food[] = "Pizza";
    char bestFood[strlen(food)];

    strcpy(bestFood, food); // string copy

    printf("\n%s", bestFood);

    char text1[] = "Hey, ";
    char text2[] = "How are you";

    strcat(text1, text2);

    printf("\n%s", text1); // string concatination

    char text3[] = "abcd";
    char text4[] = "abcd";

    int result = strcmp(text3, text4); // string compare

    printf("\n%d", result);

    return 0;
}