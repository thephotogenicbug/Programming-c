#include <stdio.h>

enum Size
{
    Small,
    Medium,
    Large,
    ExtraLarge
};

int main()
{
    enum Size shoeSize;

    shoeSize = Medium;

    printf("%d", shoeSize);

    return 0;
}