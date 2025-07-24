#include <stdio.h>
#include <ctype.h>
int main()
{
    char alpha = 'e';

    char upper = toupper(alpha);
    printf("%c\n", upper);

    char lower = tolower(upper);
    printf("%c", lower);

    return 0;
}