#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            break;
        }
        printf("%d\n", i);
    }

    // while (1)
    // {
    //     int number;
    //     printf("Enter an number: ");
    //     scanf("%d", &number);

    //     if (number < 0)
    //     {
    //         break;
    //     }
    //     printf("%d\n", number);
    // }

    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}