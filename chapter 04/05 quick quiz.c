#include<stdio.h>

int main() {
    /* program to print natural numbers from 10 to 20 when initial loop
     counter is initialized to zero*/
      int b=0;
      while(b<=20)
      {
        if (b>=10)
        {
            printf("The value of b is %d\n",b);
        }
        b++;
      }
    return 0;
}