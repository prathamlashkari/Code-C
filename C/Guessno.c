
#include <stdio.h> // Project to make a nember game in which user choose number and play game.
#include <stdlib.h>
#include <time.h>

int main()
{

    int number, guess, nguess = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    do
    {
        printf("Choose the number from 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("lower number please! \n");
        }
        else if (guess < number)
        {
            printf("Higher number please \n");
        }
        else
        {
            printf("You guessed the number in %d attempts \n", nguess);
        }
        nguess++;

    } while (guess != number);

    return 0;
}