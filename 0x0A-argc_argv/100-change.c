#include "main.h"

/**
 * main - program that prints the minimum number of coins
 *	to make change for an amount of money
 *
 * @argc: is ann integer
 * @argv: is an array of pointers to the strings
 *
 * Return: 0 (Success), 1 if  number of arguments passed is not exactly 1
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int str, mincoins = 0;
		int money = atoi(argv[1]);
		int coins[] = {25, 10, 5, 2, 1};

		for (str = 0; str < 5; str++)
		{
			if (money >= coins[str])
			{
				mincoins = mincoins + money / coins[str];
				money = money % coins[str];

				if (money % coins[str] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", mincoins);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
