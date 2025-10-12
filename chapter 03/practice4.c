#include<stdio.h>
// to determine whether a character enterd by user is lowercase or not
//ASCII VALUES LOWER CASE (97-122) UPPERCASE()
int main() {
    char ch;
    printf("Enter your Character:");
    scanf(" %c",&ch);
    printf("The character is %c \n",ch);
    printf("The value of character is %d\n",ch);
    if(ch>=97 && ch<=122){
        printf("This Character is in Lowercase\n");
    }
    else {
        printf("The Character is in Uppercase\n");
    }
    return 0;
    
}