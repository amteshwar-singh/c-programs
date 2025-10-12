#include <stdio.h>
// increment and decrement
int main()
{
    int i = 5,j;
    printf("The value of i is %d\n", i);
    j = i + 5; // 10
    printf("The value of j is %d\n",j);

    printf("The value of j is %d\n", j++);
    printf("The value of j is %d\n", j);
    printf("The value of j is %d\n", ++j);
    // i++ prints i first and then increments i (post increment operator)
    //++i increments i firsts and than prints i(pre increment operator)
    j+=2;// same as i=i+2;
    printf("The value of j is %d\n", j);
    return 0;
}