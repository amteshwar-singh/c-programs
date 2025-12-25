#include <stdio.h>
#include <string.h>
struct employee
{
    int code; // this declares a user defined data type
    float salary;
    char name[10];
}; // semicolon is important
int main()
{
    struct employee e1;
    e1.code = 62545;
    strcpy(e1.name, "Amit");
    e1.salary = 6523873.00;
    printf("%d %f %s", e1.code, e1.salary, e1.name);

    return 0;
}