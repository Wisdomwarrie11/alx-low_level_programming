#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: a program that prints the alphabet in the lowercase
 *
 *  Return: Always 0 (success)
 *
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar(10);

	return(0);

}

