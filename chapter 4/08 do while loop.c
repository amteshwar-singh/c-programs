#include <stdio.h>
// while loop checks the condition and tham executes the code
// do while runs the code and than checks the condition
int main()
{
    int i = 0;
    do
    {
        printf("The value of i is %d\n", i);
        i++;
    } while (i < 4);

    return 0;
}