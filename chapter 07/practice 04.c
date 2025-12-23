// program containing a function which reverses array passed to i
#include <stdio.h>
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    //reverse(arr);
    printArray(arr, 6);
    return 0;
}