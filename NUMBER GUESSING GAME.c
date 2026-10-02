#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main()
{
		int number, guess;
		int attempts = 0;
		
		
		// Generates a random number between 1 to 100
		srand(time(0));
		number = rand() % 50 + 1;
		
		printf("===== NUMBER GUESSING GAME =====\n");
		printf("I have selected a number between 1 to 35. \n");
		printf("Try to guess it \n\n");
		
		
		do 
		
		{
			printf("What's your Guess:  ");
			scanf("%d", &guess);
			
			attempts++;
			
			if  (guess > number)
			{
				printf("Too high! Try again \n");
			}
			else if (guess < number)
			{
				printf("Too low! Try again \n");
			}
			else 
			{
				printf("\n CONGRATULATIONS!!! YOU GUESSED THE RIGHT NUMBER!!! \n");
				printf("\n NUMBER OF ATTEMPTS: %d\n", attempts);
			}
		}	while (guess != number);
		
		return 0;
}
