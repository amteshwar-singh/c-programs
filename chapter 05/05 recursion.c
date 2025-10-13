// a function defined in c can call it self
#include <stdio.h>
int factorial(int);

/*
factorial(5)=1*2*3*4*5
factorial(4)=1*2*3*4
factorial(3)=1*2*3
factorial(n)=1*2*3*4*5*.......n-1*n
factorial(n)=factorial(n-1)*n
*/
int factorial(int n)
{
    if (n == 1 || n == 0) // Base condition
    {
        return 1;
    }
    return factorial(n - 1) * n;
}
int main()
{
    int a;
    printf("Enter number");
    scanf("%d", &a);
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}
