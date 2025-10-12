#include <stdio.h>

int main()
{
    /* calculate the income tax paid by an employ to government as per
    instructions below
          income                        tax
          2.5L-5L                       5%
          5.0-10.0                      20%
          above 10                      30%
          no tax on below 2.5 lakh income
    */
    float a, tax;
    printf("Enter your Annual income \n");
    scanf("%f", &a);
    if (a <= 250000)
    {
        printf("No need to pay tax\n");
    }
    else if (a > 250000 && a <= 500000)
    {
        tax = 0.05 * (a - 250000);
        printf("The tax you need to pay is %.2f", tax);
    }
    else if (a > 500000 && a <= 1000000)
    {
        tax = 0.05 * (500000 - 250000)+ 0.2 * (a - 500000);
        printf("The tax you need to pay is %.2f", tax);
    }
    else if (a > 1000000)
    {
        tax = 0.05 * (a - 250000)+ 0.2* (100000 - 500000)+0.3 * (a - 1000000);
        printf("The tax you need to pay is %.2f", tax);
    }
    return 0;
}