// create a 3d array and print the address of its element in increasing order
#include <stdio.h>

int main()
{
    int arr[2][3][4];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%p ",&arr[i][j][k]);
            }
        }
    }
    return 0;
}