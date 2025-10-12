#include <stdio.h>

int main()
{
    // program to sum first 10 natural numbers using for loop
    int sum = 0;

    for (int i = 0; i < 11; i++)
    {

        sum += i;
    }
    printf("The sum of first 10 natural numbers is %d \n", sum);
    return 0;
}