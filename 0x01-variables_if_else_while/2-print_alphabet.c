#include <stdio.h>

/**
 * main - Entry point
 * Description: print the aplhabet in lowercase - Use of putchar
 * Return: 0 (success)
 */
int main(void)
{
	char ch;


	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
