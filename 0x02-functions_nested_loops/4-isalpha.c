#include "main.h"

/**
 * _isalpha -> checks if the character is an alphabet
 * @c: character to be checked
 * Return: returns 1 and 0 depending on the condition
 */
int _isalpha(int c)
{
	int lower = (c >= 'a' && c <= 'z');
	int upper = (c >= 'A' && c <= 'Z');

	if (lower || upper)
		return (1);
	else
		return (0);
}

