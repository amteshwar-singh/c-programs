#include <stdio.h>
// program to convert celsius into faherneit
int main()
{
    int c;
    float f;
    printf("Enter the value in Celsius");
    scanf("%d", &c);
    f = ((9.0 / 5.0) * c) + 32;
    printf("The value in Faherneit is %.2f", f);
    return 0;
}