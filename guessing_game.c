//Name: Project [3] - Selection and Looping
//Author: Kaitlyn Zhang
//Purpose: To create a guessing game that will generate a random number and allow user to guess.

#include <stdio.h>

void printMenu(void);
int getSeedValue(void);
int generateNumber (int userInput);
void guessNumber (int userNumber, int guessingNumber);

int main(void)
{
	int userInput, seededNumber, generatedNumber, usersNumber;

	do{
	
	printMenu();
	scanf("%d", &userInput);

	switch (userInput) {
	case 1: 
		seededNumber = getSeedValue();
		generatedNumber = generateNumber(seededNumber);
		break;
	case 2: 
		printf("Enter your guess: ");
		scanf("%d", &usersNumber);
		guessNumber(usersNumber, generatedNumber);
		break;
	case 0: 
		break;
	default: printf("Please enter a valid option!\n");
		}
	}while(userInput != 0);	
		
	return 0;
}

void printMenu(void)
{
	printf("GUESSING GAME\n");
	printf("Choose an option: \n");

	printf("1 - Generate Number\n");
	printf("2 - Guess Number\n");
	printf("0 - EXIT\n");
}

int getSeedValue(void)
{
	int userInput;

	printf("Enter a number to seed the generator: ");
	scanf("%d", &userInput);
	return userInput;
}

int generateNumber (int userInput)
{
	int generateNumber, finalNumber;

	for(int i = 2; i <= 9; i++)
	{		
		generateNumber = userInput * i;
		finalNumber = generateNumber / 3;
		
	}
	return finalNumber;
}

void guessNumber (int userNumber, int guessingNumber)
{
	int guess = 0;
	while(userNumber != guessingNumber)
	{
		if (userNumber > guessingNumber)
		{
			printf("Your guess is too high, guess again: ");
			scanf("%d", &guess);
			userNumber = guess;	
		}
		else if (userNumber < guessingNumber)
		{
			printf("Your guess is too low, guess again: ");
			scanf("%d", &guess);
			userNumber = guess;
		}	
	}printf("Congratulations! You guessed it!!!\n");	
}
