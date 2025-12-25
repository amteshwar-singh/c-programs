#include<stdio.h>
#include<string.h>

int main() {
    char st[]="FUCCCCCCCCCCCKKKKKKKKKK ";
    char target[30]= "Youuuuuuuu";
    strcat(st,target);
    printf("%s ",st);
    
    return 0;
}