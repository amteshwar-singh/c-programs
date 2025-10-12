// program to sum first 10 natural numbers using do while loop
#include <stdio.h>

int main()
{
    int sum = 0, i = 0;
    do
    {
        sum += i;
        i++;
    } while (i < 11);
    printf("The sum of first 10 natural numbers is %d", sum);
    return 0;
}