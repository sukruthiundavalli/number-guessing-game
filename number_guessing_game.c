#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    srand(time(0));
    number = rand() % 100 + 1;

    printf("===== NUMBER GUESSING GAME =====\n");
    printf("Guess a number between 1 and 100\n");

    do {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > number) {
            printf("Too high! Try again.\n");
        }
        else if (guess < number) {
            printf("Too low! Try again.\n");
        }
        else {
            printf("\nCongratulations! You guessed it!\n");
            printf("Number of attempts: %d\n", attempts);
        }

    } while (guess != number);

    return 0;
}
