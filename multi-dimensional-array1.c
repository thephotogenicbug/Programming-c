#include <stdio.h>

int main()
{
    // 2 dimensional array 2 rows 3 columns
    int array[2][3] = {{1, 3, 5}, {2, 4, 6}};

    for (int i = 0; i < 2; ++i)
    {

        for (int j = 0; j < 3; ++j)
        {

            printf("%d  ", array[i][j]); // print array
        }
        printf("\n");
    }

    return 0;
}