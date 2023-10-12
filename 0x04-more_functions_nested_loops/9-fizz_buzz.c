#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the numbers from 1 to 100 followed by a new line
 *	for multiples of three print Fizz
 *	for the multiples of five print Buzz
 *	for numbers that are multiples of 3 and 5 print FizzBuzz
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 == 0) && !(num % 5 == 0))
			printf("Fizz");
		else if ((num % 5 == 0) && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);

		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}

