#include <stdio.h>

struct Person
{
    double salary;
    int age;
};
int main()
{
    struct Person person1 = {.age = 25, .salary = 5421.78};
    struct Person person2 = {.age = 31, .salary = 78943.02};

    printf("Age of person1: %d\n", person1.age);
    printf("Salary of person1: %.2lf\n", person1.salary);

    printf("Age of person1: %d\n", person2.age);
    printf("Salary of person1: %.2lf\n", person2.salary);
}