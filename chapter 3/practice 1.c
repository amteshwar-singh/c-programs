#include <stdio.h>

int main()
{
    /* to determine whether a student has passed or failed.to pass,a student
    requirs a total of 40% and atleast 33% in each subject. assume there
    are 3 subjects*/
    int a, b, c;
    printf("Enter marks in subject 1 ");
    scanf("%d", &a);
    printf("Enter marks in subject 2 ");
    scanf("%d", &b);
    printf("Enter marks in subject 3 ");
    scanf("%d", &c);
    printf("The marks are %d %d %d\n", a, b, c);
    if (a < 33 || b < 33 || c < 33)
    {
        printf("You are failed due to less marks in individual subject(s)\n");
    }
    else if (a + b + c < 120)
    {
        printf("You are failed due to less percentage");
    }
    // we can also write it as((a+b+c)/3<40)
    else
    {
        printf("You are passed");
    }
    return 0;
}