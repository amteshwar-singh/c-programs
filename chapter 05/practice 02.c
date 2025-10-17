// function to convert function to fahrenheit
#include <stdio.h>
float fahrenheit(float);
float fahrenheit(float celsius)
{
    return ((9*celsius) / 5) + 32;
}
int main()
{
    float celsius;
    printf("Enter value in Celsius: \n");
    scanf("%f", &celsius);
    printf("Temprataure in Fahrenheit is %.2f",fahrenheit(celsius));
    return 0;
}