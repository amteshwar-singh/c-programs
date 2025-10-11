#include <stdio.h>

int main()
{
    // to check if the year is leap year or not
    int a;
    printf("Enter Year: ");
    scanf("%d", &a);
    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
    {
        printf("%d is a leap year", a);
    }
    else
    {
        printf("%d is not a leap year", a);
    }
    return 0;
}