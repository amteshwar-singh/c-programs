// string is a 1D character array terminated by a null character('\0')
#include <stdio.h>

int main()
{

    char st[] = "SINGH";
    printf("\n");
    for (int i = 0; i <= 5; i++)
    {
        printf("%c", st[i]);
    }
    printf("%s", st);
    return 0;
}