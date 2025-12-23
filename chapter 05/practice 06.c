// recursive function to find sum of first 10 natural numbers
#include <stdio.h>
int sum(int);
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    // sum(n)=1+2+3+4+5+.....n-1 =+ n
    // sum(n) = sum(n-1)+n
    return sum(n - 1) + n;
}
int main()
{
    int n = 10;
    printf("the sum of first 10 natural numbers is %d", sum(n));
    return 0;
}