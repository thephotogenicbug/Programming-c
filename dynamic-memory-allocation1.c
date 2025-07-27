#include <stdio.h>
#include <stdlib.h>
int main()
{

    int n = 4;
    int *ptr;

    ptr = (int *)malloc(n * sizeof(int)); // memory allocation

    if (ptr == NULL)
    {
        printf("Memory cannot be allocated");
        return 0;
    }

    printf("Allocated memory\n");
    for (int i = 0; i < n; ++i)
    {
        printf("%p\n", ptr + i);
    }

    n = 6;

    ptr = realloc(ptr, n * sizeof(int)); // reallocated memory;

    printf("Newly Allocated memory\n");
    for (int i = 0; i < n; ++i)
    {
        printf("%p\n", ptr + i);
    }

    // free function
    free(ptr);

    return 0;
}