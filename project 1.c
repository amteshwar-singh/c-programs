// guessing game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // initialize random number generator
    srand(time(0));

    // generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int number_of_guesses = 0;
    int guessed;

    // print the random number
    // printf("random number: %d \n",randomNumber);

    do
    {
        printf("Guess the number");
        scanf("%d", &guessed);
        if (guessed > randomNumber)
        {
            printf("Lower number please!\n");
        }
        else if (randomNumber > guessed)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("Congrats!!\n");
        }
        number_of_guesses++;

    } while (guessed != randomNumber);

    printf("You guessed the number in %d guesses", number_of_guesses);

    return 0;
}