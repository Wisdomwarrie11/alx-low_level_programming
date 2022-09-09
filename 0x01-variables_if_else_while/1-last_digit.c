#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print if the number is positive, zero, or negative
 *
 * Description: using the main function
 * this program prints "programminh is positive, zero, or negative
 * Return: 00
 */
int main(void)

{
	int i;
	int last_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*get the last digit*/
	last_num = n % 10;

	if (last_num > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, last		_name)
	}
	else if (last_num == 0)
		printf("Last digit of %i is %i is 0\n", n, last_num);
	else
	{
		printf("last digit of %i is %i and is less than 6 and not 0\n", 		n, last_num)
	}
	return (0);
}

