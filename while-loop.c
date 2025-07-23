#include <stdio.h>

int main()
{

    // int count = 1;
    // while(count < 5){
    //     printf("While loop in c \n");
    //     printf("Count = %d\n", count);
    //     count++;
    // }

    // multiplication table
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    int count1 = 1;

    while (count1 <= 10)
    {
        int result = number * count1;
        printf("%d*%d = %d\n", number, count1, result);
        count1++;
    }

    return 0;
}