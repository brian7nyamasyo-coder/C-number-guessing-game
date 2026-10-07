#include<stdio.h>

int main(void)
{
    int secret_number = 235;
    int guess_number;

    printf("====NUMBER GUESSING GAME BY CYBERKNIGHT_WIZARD====\n");
    printf("GUESS THE CORRECT NUMBER TO WIN A PRIZE\n");
    printf("Guess a number: ");
    scanf("%d", &guess_number);

    while(guess_number != secret_number)
    {
        if(guess_number > secret_number)
        {
            printf("Your guess of %d is high,please try again.\n", guess_number);
        }
        else
        {
            printf("Your guess of %d is low,please try again.\n", guess_number);
        }
        printf("Incorrect guess,please try again to win.\n");
        printf("Guess a number: ");
        scanf("%d", &guess_number);
    }
    printf("Congratulations.Your guess of %d is the winning number.\n", guess_number);
    return 0;
}
