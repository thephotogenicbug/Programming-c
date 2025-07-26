#include <stdio.h>

int main()
{
    // 2 dimensional array 2 rows 3 columns
    int array[2][3] = {{1, 3, 5}, {2, 4, 6}};

    // update value
    array[0][2] = 7;
    array[1][1] = 8;

    printf("%d\n", array[0][2]);
    printf("%d\n", array[1][1]);

    return 0;
}