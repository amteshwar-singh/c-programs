/*
Write a program with three functions
1 good morning function which prints good morning
2 good afternoon function which prints good afternoon
3 good night function which prints good night

main() should call all these in order 1>2>3
*/
#include<stdio.h>

void good_morning();
void good_afternoon();
void good_night();

void good_morning(){
    printf("good morning\n");
}
void good_afternoon(){
    printf("good afternoon\n");
}
void good_night(){
    printf("good night\n");
}

int main() {
    good_morning();
    good_afternoon();
    good_night();
    
    return 0;
}
