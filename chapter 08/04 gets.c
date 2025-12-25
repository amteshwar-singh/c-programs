// gets is a fn which can be used to receive a multi word string
// puts prints string and puts cursor on the next line
#include <stdio.h>

int main()
{
    char st[30];

    gets(st); // the entered string is stored in st!

    printf("%s", st);
    puts(st);
    printf("hey");
    return 0;
}