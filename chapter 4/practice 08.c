// program to calculate factorial of a given number using for loop
#include <stdio.h>
int main()
{
    int num;
    int product = 1;
    printf("\nEnter Number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        product *= i;
    }
    printf("The factorial of the given number is %d \n", product);

    return 0;
}
