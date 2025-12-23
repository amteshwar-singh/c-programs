// functiom to calculate force of attraction on a body of mass m exerted by earth
#include <stdio.h>
float force(float);
float force(float mass)
{
    return (9.8 * mass);
}
int main()
{
    float mass;
    printf("Enter mass:");
    scanf("%f", &mass);
    printf("Force=%.2f N", force(mass));
    return 0;
}