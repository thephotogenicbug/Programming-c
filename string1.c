#include <stdio.h>

int main()
{

    char str[] = "Naveen";

    printf("%c\n", str[0]);
    printf("%c\n", str[1]);
    printf("%c\n", str[2]);
    printf("%c\n", str[3]);
    printf("%c\n", str[4]);
    printf("%c\n\n", str[5]);

    str[5] = 'N';

    printf("%s", str);

    return 0;
}